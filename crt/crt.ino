//#include <PS2Keyboard.h>
#include <FastLED.h>

// LED Parameters
#define LED_PIN       6           // Data pin connected to LED strip
#define NUM_LEDS      300         // Number of LEDs in strip
#define BRIGHTNESS    50          // Set Brightness (0-255)
#define LED_TYPE      WS2812B     // Type of LED
#define COLOR_ORDER   GRB         // Color order for LEDs

CRGB leds[NUM_LEDS];
unsigned int ledIndex = 0;

static uint8_t hue = 0;
static uint8_t saturation = 255;
static uint8_t brightness = 255;

// Display Parameters
#define XDIM  25                  // Width of LED Array
#define YDIM  12                  // Height of LED Array

// Button Parameters
#define BUTTON_PIN 7              // Pin connected to the button
#define DEBOUNCE_DELAY 50         // Debounce delay in milliseconds

// Button state variables
bool buttonPressed = false;
bool lastButtonState = HIGH;
unsigned long lastDebounceTime = 0;

//// Keyboard Parameters
//#define PS2_KEYBOARD_DATA_PIN  8  // Input from Keyboard
//#define PS2_CLOCK_PIN          9  // Output Clock from Arduino
//
//PS2Keyboard keyboard;

enum ColorType {
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
    COLOR_YELLOW,
    COLOR_CYAN,
    COLOR_MAGENTA,
    COLOR_ORANGE,
    COLOR_LIME,
    COLOR_WHITE,
    COLOR_TEAL,
    COLOR_LAVENDER,
    COLOR_PINK,
    COLOR_OFF
};

typedef void (*DesignFunction)();

unsigned char currentPatternIndex = -1;

struct Raindrop {
    char x;
    char y;
    bool isAlive;
    unsigned char aliveCount;
    ColorType color;
};

#define NUM_DROPS 15
Raindrop drops[NUM_DROPS];

// Function declarations
void nextDesign();
void designSmiley();
void designQuestionMark();
void designEye();
void designMatrix();
// void designSpots();
// void designFallingHearts();
void getColorFromString(ColorType colorName, uint8_t &hue, uint8_t &saturation, uint8_t &brightness);
void paintPixel(char x, char y, ColorType colorName);
int getLEDIndex (char x, char y);
void textGridToPixels(const char* gridString);

const DesignFunction DESIGNS[] = {
    designSmiley,
    designQuestionMark,
    designEye,
    designMatrix
    // designSpots,
    // designFallingHearts
};

const char NUM_DESIGNS = sizeof(DESIGNS) / sizeof(DesignFunction);

void setup() {
  // LED Setup
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
  fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));

  FastLED.show();

  // Button Setup
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  
//  // Keyboard Setup
//  Serial.begin(9600);
//  keyboard.begin(PS2_KEYBOARD_DATA_PIN, PS2_CLOCK_PIN);
//  Serial.println("PS2 Keyboard Ready");

  // Test LED on Board Setup
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);

  Serial.begin(9600);
  Serial.println("Booted Up!");
}

void loop() {  
  int reading = digitalRead(BUTTON_PIN);

  if(reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > DEBOUNCE_DELAY) {
    if (reading == LOW && !buttonPressed) {
      buttonPressed = true;
      Serial.println("Button Pressed");
      Serial.print("Current Design Index = ");
      Serial.println(currentPatternIndex);

      fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));
      nextDesign();
    }
    else if (reading == HIGH && buttonPressed) {
      buttonPressed = false;
      Serial.println("Button Released");
    }
  } 
  
  lastButtonState = reading;

  switch (currentPatternIndex) {
    case 3:
      designMatrix();
      break;
    
    // case 4:
    //   designSpots();
    //   break;

    // case 5:
    //   designFallingHearts();
    //   break;

    default:
      break;
  }

  delay(50);
}

void getColorType(ColorType colorName, uint8_t &hue, uint8_t &saturation, uint8_t &brightness) {    
    switch (colorName) {
        case COLOR_RED:      // Red
            hue = 0;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_GREEN:    // Green
            hue = 96;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_BLUE:     // Blue
            hue = 160;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_YELLOW:   // Yellow
            hue = 64;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_CYAN:     // Cyan
            hue = 128;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_MAGENTA:  // Magenta
            hue = 192;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_ORANGE:   // Orange
            hue = 32;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_LIME:     // Lime
            hue = 96;
            saturation = 200;
            brightness = 255;
            break;
            
        case COLOR_WHITE:    // White
            hue = 0;
            saturation = 0;
            brightness = 255;
            break;
            
        case COLOR_TEAL:     // Teal
            hue = 112;
            saturation = 255;
            brightness = 255;
            break;
            
        case COLOR_LAVENDER: // Lavender
            hue = 180;
            saturation = 128;
            brightness = 255;
            break;
            
        case COLOR_PINK:     // Pink
            hue = 240;
            saturation = 140;
            brightness = 255;
            break;
          
        case COLOR_OFF:  // Default to off if input doesn't match
        default:
            hue = 0;
            saturation = 0;
            brightness = 0;
            break;
    }

    return;
}

void paintPixel(char x, char y, ColorType colorName) {  
  uint8_t hue = 0;
  uint8_t saturation = 0;
  uint8_t brightness = 0;
  getColorType(colorName, hue, saturation, brightness);

  CHSV hsvColor = CHSV(hue, saturation, brightness);
  CRGB rgbColor;
  hsv2rgb_rainbow(hsvColor, rgbColor);

  leds[getLEDIndex(x, y)] = hsvColor;
}

int getLEDIndex (char x, char y) {
    if ((y % 2) == 0) { // Even row where strip runs left to right
      return ((x % XDIM) + (y  * XDIM));
    }
    else {              // Odd row where strip runs right to left
      return ((XDIM - 1 - (x % XDIM)) + (y * XDIM));
    }
}
