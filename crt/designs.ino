CRGB rgbColor;
CHSV hsvColor;

void nextDesign() {
    for (unsigned char i = 0; i < NUM_DROPS; ++i) {
        drops[i].x = 0;
        drops[i].y = 0;
        drops[i].isAlive = false;
        drops[i].aliveCount = 0;
        drops[i].color = COLOR_OFF;
    }

    currentPatternIndex = (currentPatternIndex + 1) % NUM_DESIGNS;

    DESIGNS[currentPatternIndex]();
}

void designSmiley() {
    // const char* smiley = 
    // "........................."  // Row 11
    // "........................."  // Row 10
    // ".......YY.......YY......."  // Row 9
    // ".......YY.......YY......."  // Row 8
    // ".......YY.......YY......."  // Row 7
    // "........................."  // Row 6
    // "........................."  // Row 5
    // "...YY...............YY..."  // Row 4
    // "....YY.............YY...."  // Row 3
    // "......YYY.......YYY......"  // Row 2
    // "........YYYYYYYYY........"  // Row 1
    // "........................."; // Row 0

    // Row 1
    paintPixel(8, 1, COLOR_YELLOW);
    paintPixel(9, 1, COLOR_YELLOW);
    paintPixel(10, 1, COLOR_YELLOW);
    paintPixel(11, 1, COLOR_YELLOW);
    paintPixel(12, 1, COLOR_YELLOW);
    paintPixel(13, 1, COLOR_YELLOW);
    paintPixel(14, 1, COLOR_YELLOW);
    paintPixel(15, 1, COLOR_YELLOW);
    paintPixel(16, 1, COLOR_YELLOW);

    // Row 2
    paintPixel(6, 2, COLOR_YELLOW);
    paintPixel(7, 2, COLOR_YELLOW);
    paintPixel(8, 2, COLOR_YELLOW);
    paintPixel(16, 2, COLOR_YELLOW);
    paintPixel(17, 2, COLOR_YELLOW);
    paintPixel(18, 2, COLOR_YELLOW);

    // Row 3
    paintPixel(4, 3, COLOR_YELLOW);
    paintPixel(5, 3, COLOR_YELLOW);
    paintPixel(19, 3, COLOR_YELLOW);
    paintPixel(20, 3, COLOR_YELLOW);

    // Row 4
    paintPixel(3, 4, COLOR_YELLOW);
    paintPixel(4, 4, COLOR_YELLOW);
    paintPixel(20, 4, COLOR_YELLOW);
    paintPixel(21, 4, COLOR_YELLOW);

    // Row 7 (Eyes)
    paintPixel(7, 7, COLOR_YELLOW);
    paintPixel(8, 7, COLOR_YELLOW);
    paintPixel(16, 7, COLOR_YELLOW);
    paintPixel(17, 7, COLOR_YELLOW);

    // Row 8 (Eyes)
    paintPixel(7, 8, COLOR_YELLOW);
    paintPixel(8, 8, COLOR_YELLOW);
    paintPixel(16, 8, COLOR_YELLOW);
    paintPixel(17, 8, COLOR_YELLOW);

    // Row 9 (Eyes)
    paintPixel(7, 9, COLOR_YELLOW);
    paintPixel(8, 9, COLOR_YELLOW);
    paintPixel(16, 9, COLOR_YELLOW);
    paintPixel(17, 9, COLOR_YELLOW);

    FastLED.show();
}

void designQuestionMark() {
    // const char* questionMark =
    // "..........RRRRR........."  // Row 11
    // "........RRRRRRRRR........"  // Row 10
    // ".......RRR.....RRR......."  // Row 9
    // "......RRR.......RRR......"  // Row 8
    // "......RRR.......RRR......"  // Row 7
    // "..............RRR........"  // Row 6
    // "............RRR.........."  // Row 5
    // "...........RRR..........."  // Row 4
    // "...........RRR..........."  // Row 3
    // "........................."  // Row 2
    // "...........RRR..........."  // Row 1
    // "...........RRR..........."; // Row 0

    paintPixel(11, 0, COLOR_RED);
    paintPixel(12, 0, COLOR_RED);
    paintPixel(13, 0, COLOR_RED);
    paintPixel(11, 1, COLOR_RED);
    paintPixel(12, 1, COLOR_RED);
    paintPixel(13, 1, COLOR_RED);

    paintPixel(11, 3, COLOR_RED);
    paintPixel(12, 3, COLOR_RED);
    paintPixel(13, 3, COLOR_RED);

    paintPixel(11, 4, COLOR_RED);
    paintPixel(12, 4, COLOR_RED);
    paintPixel(13, 4, COLOR_RED);

    paintPixel(12, 5, COLOR_RED);
    paintPixel(13, 5, COLOR_RED);
    paintPixel(14, 5, COLOR_RED);

    paintPixel(14, 6, COLOR_RED);
    paintPixel(15, 6, COLOR_RED);
    paintPixel(16, 6, COLOR_RED);

    paintPixel(16, 7, COLOR_RED);
    paintPixel(17, 7, COLOR_RED);
    paintPixel(18, 7, COLOR_RED);

    paintPixel(16, 8, COLOR_RED);
    paintPixel(17, 8, COLOR_RED);
    paintPixel(18, 8, COLOR_RED);

    paintPixel(15, 9, COLOR_RED);
    paintPixel(16, 9, COLOR_RED);
    paintPixel(17, 9, COLOR_RED);

    paintPixel(8, 10, COLOR_RED);
    paintPixel(9, 10, COLOR_RED);
    paintPixel(10, 10, COLOR_RED);
    paintPixel(11, 10, COLOR_RED);
    paintPixel(12, 10, COLOR_RED);
    paintPixel(13, 10, COLOR_RED);
    paintPixel(14, 10, COLOR_RED);
    paintPixel(15, 10, COLOR_RED);
    paintPixel(16, 10, COLOR_RED);

    paintPixel(10, 11, COLOR_RED);
    paintPixel(11, 11, COLOR_RED);
    paintPixel(12, 11, COLOR_RED);
    paintPixel(13, 11, COLOR_RED);
    paintPixel(14, 11, COLOR_RED);

    paintPixel(7, 9, COLOR_RED);
    paintPixel(8, 9, COLOR_RED);
    paintPixel(9, 9, COLOR_RED);

    paintPixel(6, 8, COLOR_RED);
    paintPixel(7, 8, COLOR_RED);
    paintPixel(8, 8, COLOR_RED);

    paintPixel(6, 7, COLOR_RED);
    paintPixel(7, 7, COLOR_RED);
    paintPixel(8, 7, COLOR_RED);

    FastLED.show();
}

void drawEyeOutline() {
    // Row 11
    paintPixel(10, 11, COLOR_CYAN);
    paintPixel(11, 11, COLOR_CYAN);
    paintPixel(12, 11, COLOR_CYAN);
    paintPixel(13, 11, COLOR_CYAN);
    paintPixel(14, 11, COLOR_CYAN);

    // Row 10
    paintPixel(7, 10, COLOR_CYAN);
    paintPixel(8, 10, COLOR_CYAN);
    paintPixel(9, 10, COLOR_CYAN);

    paintPixel(15, 10, COLOR_CYAN);
    paintPixel(16, 10, COLOR_CYAN);
    paintPixel(17, 10, COLOR_CYAN);

    // Row 9
    paintPixel(4, 9, COLOR_CYAN);
    paintPixel(5, 9, COLOR_CYAN);
    paintPixel(6, 9, COLOR_CYAN);

    paintPixel(18, 9, COLOR_CYAN);
    paintPixel(19, 9, COLOR_CYAN);
    paintPixel(20, 9, COLOR_CYAN);

    // Row 8
    paintPixel(2, 8, COLOR_CYAN);
    paintPixel(3, 8, COLOR_CYAN);

    paintPixel(21, 8, COLOR_CYAN);
    paintPixel(22, 8, COLOR_CYAN);

    // Row 7
    paintPixel(1, 7, COLOR_CYAN);

    paintPixel(23, 7, COLOR_CYAN);

    // Row 6
    paintPixel(0, 6, COLOR_CYAN);
    
    paintPixel(24, 6, COLOR_CYAN);

    // Row 5
    paintPixel(0, 5, COLOR_CYAN);
    
    paintPixel(24, 5, COLOR_CYAN);

    // Row 4
    paintPixel(1, 4, COLOR_CYAN);

    paintPixel(23, 4, COLOR_CYAN);

    // Row 3
    paintPixel(2, 3, COLOR_CYAN);
    paintPixel(3, 3, COLOR_CYAN);

    paintPixel(21, 3, COLOR_CYAN);
    paintPixel(22, 3, COLOR_CYAN);

    // Row 2
    paintPixel(4, 2, COLOR_CYAN);
    paintPixel(5, 2, COLOR_CYAN);
    paintPixel(6, 2, COLOR_CYAN);

    paintPixel(18, 2, COLOR_CYAN);
    paintPixel(19, 2, COLOR_CYAN);
    paintPixel(20, 2, COLOR_CYAN);

    // Row 1
    paintPixel(7, 1, COLOR_CYAN);
    paintPixel(8, 1, COLOR_CYAN);
    paintPixel(9, 1, COLOR_CYAN);

    paintPixel(15, 1, COLOR_CYAN);
    paintPixel(16, 1, COLOR_CYAN);
    paintPixel(17, 1, COLOR_CYAN);

    // Row 0
    paintPixel(10, 0, COLOR_CYAN);
    paintPixel(11, 0, COLOR_CYAN);
    paintPixel(12, 0, COLOR_CYAN);
    paintPixel(13, 0, COLOR_CYAN);
    paintPixel(14, 0, COLOR_CYAN);
}

bool isBlinking = false;

void designEyeAnimated() {
    // const char* eye = 
    // "..........CCCCC.........."  // Row 11
    // ".......CCC.....CCC......."  // Row 10
    // "....CCC...........CCC...."  // Row 9
    // "..CC.................CC.."  // Row 8
    // ".C.........MMM.........C."  // Row 7
    // "C.........MMMMM.........C"  // Row 6
    // "C.........MMMMM.........C"  // Row 5
    // ".C.........MMM.........C."  // Row 4
    // "..CC.................CC.."  // Row 3
    // "....CCC...........CCC...."  // Row 2
    // ".......CCC.....CCC......."  // Row 1
    // "..........CCCCC.........."; // Row 0

    const CHSV EYELID_COLOR = CHSV(0, 0, 120);

    drawEyeOutline();

    if (isBlinking) {
        
    }

    if (random8() < 16) {
    
    }
}

void designEye() {
    // const char* eye = 
    // "........................."  // Row 11
    // "........................."  // Row 10
    // ".........CCCCCCC........."  // Row 9
    // "......CCC.......CCC......"  // Row 8
    // "....CC.............CC...."  // Row 7
    // "..CC.......MMM.......CC.."  // Row 6
    // ".C........MMMMM........C."  // Row 5
    // "..CC.......MMM.......CC.."  // Row 4
    // "....CC.............CC...."  // Row 3
    // "......CCC.......CCC......"  // Row 2
    // ".........CCCCCCC........."  // Row 1
    // "........................."; // Row 0

    // Row 1
    paintPixel(9, 1, COLOR_CYAN);
    paintPixel(10, 1, COLOR_CYAN);
    paintPixel(11, 1, COLOR_CYAN);
    paintPixel(12, 1, COLOR_CYAN);
    paintPixel(13, 1, COLOR_CYAN);
    paintPixel(14, 1, COLOR_CYAN);
    paintPixel(15, 1, COLOR_CYAN);

    // Row 2
    paintPixel(6, 2, COLOR_CYAN);
    paintPixel(7, 2, COLOR_CYAN);
    paintPixel(8, 2, COLOR_CYAN);
    paintPixel(16, 2, COLOR_CYAN);
    paintPixel(17, 2, COLOR_CYAN);
    paintPixel(18, 2, COLOR_CYAN);

    // Row 3
    paintPixel(4, 3, COLOR_CYAN);
    paintPixel(5, 3, COLOR_CYAN);
    paintPixel(19, 3, COLOR_CYAN);
    paintPixel(20, 3, COLOR_CYAN);

    // Row 4
    paintPixel(2, 4, COLOR_CYAN);
    paintPixel(3, 4, COLOR_CYAN);
    paintPixel(11, 4, COLOR_MAGENTA);
    paintPixel(12, 4, COLOR_MAGENTA);
    paintPixel(13, 4, COLOR_MAGENTA);
    paintPixel(21, 4, COLOR_CYAN);
    paintPixel(22, 4, COLOR_CYAN);

    // Row 5
    paintPixel(1, 5, COLOR_CYAN);
    paintPixel(10, 5, COLOR_MAGENTA);
    paintPixel(11, 5, COLOR_MAGENTA);
    paintPixel(12, 5, COLOR_MAGENTA);
    paintPixel(13, 5, COLOR_MAGENTA);
    paintPixel(14, 5, COLOR_MAGENTA);
    paintPixel(23, 5, COLOR_CYAN);

    // Row 6
    paintPixel(2, 6, COLOR_CYAN);
    paintPixel(3, 6, COLOR_CYAN);
    paintPixel(11, 6, COLOR_MAGENTA);
    paintPixel(12, 6, COLOR_MAGENTA);
    paintPixel(13, 6, COLOR_MAGENTA);
    paintPixel(21, 6, COLOR_CYAN);
    paintPixel(22, 6, COLOR_CYAN);

    // Row 7
    paintPixel(4, 7, COLOR_CYAN);
    paintPixel(5, 7, COLOR_CYAN);
    paintPixel(19, 7, COLOR_CYAN);
    paintPixel(20, 7, COLOR_CYAN);

    // Row 8
    paintPixel(6, 8, COLOR_CYAN);
    paintPixel(7, 8, COLOR_CYAN);
    paintPixel(8, 8, COLOR_CYAN);
    paintPixel(16, 8, COLOR_CYAN);
    paintPixel(17, 8, COLOR_CYAN);
    paintPixel(18, 8, COLOR_CYAN);

    // Row 9
    paintPixel(9, 9, COLOR_CYAN);
    paintPixel(10, 9, COLOR_CYAN);
    paintPixel(11, 9, COLOR_CYAN);
    paintPixel(12, 9, COLOR_CYAN);
    paintPixel(13, 9, COLOR_CYAN);
    paintPixel(14, 9, COLOR_CYAN);
    paintPixel(15, 9, COLOR_CYAN);

    FastLED.show();
}

void designMatrix() {
    for (int i = 0; i < NUM_LEDS; ++i) {
        rgbColor = leds[i];
        hsvColor = rgb2hsv_approximate(rgbColor);

        hsvColor.value = scale8(hsvColor.value, 204); // *= 0.8;
        hsvColor.saturation += (256 - hsvColor.saturation) * 0.5;
        hsv2rgb_rainbow(hsvColor, rgbColor);

        leds[i] = rgbColor;
    }

    for (char i = 0; i < NUM_DROPS; ++i) {
        if (drops[i].isAlive) {
            drops[i].y--;

            if (drops[i].y >= 0) {
                hsvColor = CHSV(96, 255, 255);
                hsv2rgb_rainbow(hsvColor, rgbColor);
                leds[getLEDIndex(drops[i].x, drops[i].y)] = rgbColor;
            }
            else {
                drops[i].isAlive = false;
            }
        }
        else if (random8() < 16) {
            drops[i].x = random8(XDIM);
            drops[i].y = YDIM;
            drops[i].isAlive = true;
        }
    }

    FastLED.show();
}

void designFireworks() {
    for (int i = 0; i < NUM_LEDS; ++i) {
        rgbColor = leds[i];
        hsvColor = rgb2hsv_approximate(rgbColor);

        hsvColor.value = scale8(hsvColor.value, 230);
        hsvColor.saturation = scale8(hsvColor.saturation, 230);
        hsv2rgb_rainbow(hsvColor, rgbColor);

        leds[i] = rgbColor;
    }

    for (char i = 0; i < NUM_DROPS; ++i) {
        if (drops[i].isAlive) {
            if (drops[i].aliveCount == 3) {
                drops[i].isAlive = false;
                continue;
            }

            for (unsigned char j = drops[i].x - drops[i].aliveCount; j < drops[i].x + drops[i].aliveCount + 1; ++j) {
                for (unsigned char k = drops[i].y - drops[i].aliveCount; k < drops[i].y + drops[i].aliveCount + 1; ++k) {
                    paintPixel(j, k, drops[i].color);
                }
            }
            if (drops[i].aliveCount == 2) {
                paintPixel(drops[i].x + 2, drops[i].y + 2, COLOR_OFF);
                paintPixel(drops[i].x + 2, drops[i].y - 2, COLOR_OFF);
                paintPixel(drops[i].x - 2, drops[i].y - 2, COLOR_OFF);
                paintPixel(drops[i].x - 2, drops[i].y + 2, COLOR_OFF);
            }

            drops[i].aliveCount++;
        }
        else if (random8() < 8) {
            drops[i].isAlive = true;
            drops[i].x = random8(1, XDIM - 1);
            drops[i].y = random8(1, YDIM - 1);
            drops[i].aliveCount = 0;
            drops[i].color = (ColorType) random8(0, 12);
        }
    }

    FastLED.show();
}

void drawDVDLogo(char x, char y, ColorType color) {
// Start from top left pixel
//     ".......DD.V.VDD.........."  // Row 1
//     ".......D.DV.VD.D........."  // Row 2
//     ".......DD..V.DD.........."  // Row 3
//     "........................."  // Row 4

    // Row 1
    paintPixel(x, y, color);
    paintPixel(x + 1, y, color);
    paintPixel(x + 3, y, color);
    paintPixel(x + 5, y, color);
    paintPixel(x + 6, y, color);
    paintPixel(x + 7, y, color);
    
    // Row 2
    paintPixel(x, y - 1, color);
    paintPixel(x + 2, y - 1, color);
    paintPixel(x + 3, y - 1, color);
    paintPixel(x + 5, y - 1, color);
    paintPixel(x + 6, y - 1, color);
    paintPixel(x + 8, y - 1, color);

    // Row 3
    paintPixel(x, y - 2, color);
    paintPixel(x + 1, y - 2, color);
    paintPixel(x + 4, y - 2, color);
    paintPixel(x + 6, y - 2, color);
    paintPixel(x + 7, y - 2, color);

}

char dvdState;

void designDVDLogo() {
    if (!drops[0].isAlive) {
        drops[0].x = random8(0, 16);
        drops[0].y = random(3, 12);
        drops[0].isAlive = true;
        drops[0].color = (ColorType) random8(0, 12);
        drops[0].aliveCount = 0;

        dvdState = 0;
    }
    else {
        delay(10); // Makes the logo move slower, adjust if needed

        if (drops[0].aliveCount != 0) {
            drops[0].aliveCount = 0;

            fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));
            drawDVDLogo(drops[0].x, drops[0].y, drops[0].color);

            // Detects if we need to change movement direction of logo
            switch(dvdState) {
                case 0: // Down Right
                    if (drops[0].y == 2 && drops[0].x == 16) { // Hits bottom right corner
                        dvdState = 3;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x--;
                        drops[0].y++;
                    }
                    else if (drops[0].y == 2) { // Hits bottom wall
                        dvdState = 1;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x++;
                        drops[0].y++;
                    }
                    else if (drops[0].x == 16) { // Hits right wall
                        dvdState = 2;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x--;
                        drops[0].y--;
                    }
                    else {
                        drops[0].x++;
                        drops[0].y--;
                    }

                    break;
                case 1: // Up Right
                    if (drops[0].y == 11 && drops[0].x == 16) { // Hits top right corner
                        dvdState = 2;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x--;
                        drops[0].y--;
                    }
                    else if (drops[0].y == 11) { // Hits top wall
                        dvdState = 0;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x++;
                        drops[0].y--;
                    }
                    else if (drops[0].x == 16) { // Hits right wall
                        dvdState = 3;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x--;
                        drops[0].y++;
                    }
                    else {
                        drops[0].x++;
                        drops[0].y++;
                    }

                    break;
                case 2: //Down left
                    if (drops[0].y == 2 && drops[0].x == 0) { // Hits bottom left corner
                        dvdState = 1;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x++;
                        drops[0].y++;
                    }
                    else if (drops[0].y == 2) { // Hits bottom wall
                        dvdState = 3;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x--;
                        drops[0].y++;
                    }
                    else if (drops[0].x == 0) { // Hits left wall
                        dvdState = 0;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x++;
                        drops[0].y--;
                    }
                    else {
                        drops[0].x--;
                        drops[0].y--;
                    }

                    break;
                case 3: // Up Left
                    if (drops[0].y == 11 && drops[0].x == 0) { // Hits top left corner
                        dvdState = 0;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x++;
                        drops[0].y--;
                    }
                    else if (drops[0].y == 11) { // Hits top wall
                        dvdState = 2;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x--;
                        drops[0].y--;
                    }
                    else if (drops[0].x == 0) { // Hits left wall
                        dvdState = 1;
                        drops[0].color = (ColorType) random8(0, 12);
                        drops[0].x++;
                        drops[0].y++;
                    }
                    else {
                        drops[0].x--;
                        drops[0].y++;
                    }
                
                    break;
                default:
                    break;
            }
        }
        else {
            drops[0].aliveCount++;
        }
    }

    FastLED.show();
}

void designLife() {
    if (!drops[0].isAlive) {
        fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));

        CHSV hsvColorAlive = CSHV(70, 200, 128); // Aive Value is 128
        CHSV hsvColorDead = CSHV(70, 200, 0);
        CRGB rgbColorAlive;
        CRGB rgbColorDead;
        hsv2rgb_rainbow(hsvColorAlive, rgbColorAlive);
        hsv2rgb_rainbow(hsvColorDead, rgbColorDead);

        for (int i = 0; i < NUM_LEDS; ++i) {
            if (random8() < 70) { // Alive Cell
                leds[i] = rgbColorAlive;
            } 
            else {                // Dead Cell
                leds[i] = rgbColorDead;
            }
        }

        FastLED.show();
        delay(500);
        drops[0].isAlive = true;
    }
    else {
        // Reset neighborCount via pixel's saturation
        for (int i = 0; i < NUM_LEDS; ++i) {
            hsvColor = rgb2hsv_approximate(leds[i]);
            hsvColor.saturation = 0;
            hsv2rgb_rainbow(hsvColor, rgbColor);

            leds[i] = rgbColor;
        }

        // Count Neighbors for each cell
        for (char x = 0; i < XDIM; ++x) {
            for (char y = 0; y < YDIM; ++y) {
                hsvColor = rgb2hsv_approximate(leds[getLEDIndex(x, y)]);

                if (hsvColor.value == 128) { // Cell is alive
                    for (char dx = -1; dx < 2; ++dx) {
                        for (char dy = -1; dy < 2; ++dy) {
                            if (dx == 0 && dy == 0) continue;

                            if (dx + x >= 0 && dx + x < XDIM && dy + y >= 0 && dy + y < YDIM) {
                                int neighborIndex = getLEDIndex(dx + x, dy + y);

                                hsvColor = rgb2hsv_approximate(leds[neighborIndex]);
                                hsvColor.saturation++;
                                hsv2rgb_rainbow(rgbColor, hsvColor);

                                leds[neighborIndex] = rgbColor;
                            }
                        }
                    }
                }
            }
        }

        // Game of Life Rules
        for (int i = 0; i < NUM_LEDS; ++i) {
            hsvColor = rgb2hsv_approximate(leds[i]);

            if (hsvColor.value != 128 && hsvColor.saturation == 3) { // Dead Cell comes Alive
                hsvColor.value = 128;
                hsvColor.hue = 70;
            }
            else if (!(hsvColor.value == 128 && hsvColor.saturation &&(hsvColor.saturation == 2 || hsvColor.saturation == 3))) { // Living Cell Dies from Under/Over Population
                hsvColor.value = 0;
            }
            else { // Cell grows visually older
                hsvColor.hue += 8;
            }

            hsvColor.saturation = 150; // Reset saturation for display
        }

        FastLED.show();

        delay(950);
    }
}

void drawLetterA(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "....................AA..."  // Row 9
//     "...................A..A.."  // Row 8
//     "..................AA..AA."  // Row 7
//     ".................AA....AA"  // Row 6
//     ".................AAAAAAAA"  // Row 5
//     ".................AA....AA"  // Row 4
//     ".................AA....AA"  // Row 3
//     ".................SA....AA"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0

    paintPixel(x, y, color);
    paintPixel(x + 1, y, color);
    paintPixel(x + 6, y, color);
    paintPixel(x + 7, y, color);

    paintPixel(x, y + 1, color);
    paintPixel(x + 1, y + 1, color);
    paintPixel(x + 6, y + 1, color);
    paintPixel(x + 7, y + 1, color);

    paintPixel(x, y + 2, color);
    paintPixel(x + 1, y + 2, color);
    paintPixel(x + 6, y + 2, color);
    paintPixel(x + 7, y + 2, color);

    paintPixel(x, y + 3, color);
    paintPixel(x + 1, y + 3, color);
    paintPixel(x + 2, y + 3, color);
    paintPixel(x + 3, y + 3, color);
    paintPixel(x + 4, y + 3, color);
    paintPixel(x + 5, y + 3, color);
    paintPixel(x + 6, y + 3, color);
    paintPixel(x + 7, y + 3, color);

    paintPixel(x, y + 4, color);
    paintPixel(x + 1, y + 4, color);
    paintPixel(x + 6, y + 4, color);
    paintPixel(x + 7, y + 4, color);

    paintPixel(x + 1, y + 5, color);
    paintPixel(x + 2, y + 5, color);
    paintPixel(x + 5, y + 5, color);
    paintPixel(x + 6, y + 5, color);

    paintPixel(x + 2, y + 6, color);
    paintPixel(x + 5, y + 6, color);

    paintPixel(x + 3, y + 7, color);
    paintPixel(x + 4, y + 7, color);
}

void drawLetterB(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................BBBBB..."  // Row 9
//     ".................B....BB."  // Row 8
//     ".................B......B"  // Row 7
//     ".................B....BB."  // Row 6
//     ".................BBBBBBB."  // Row 5
//     ".................B......B"  // Row 4
//     ".................B....BB."  // Row 3
//     ".................SBBBB..."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0

    paintPixel(x, y, color);
    paintPixel(x + 1, y, color);
    paintPixel(x + 2, y, color);
    paintPixel(x + 3, y, color);
    paintPixel(x + 4, y, color);

    paintPixel(x, y + 1, color);
    paintPixel(x + 5, y + 1, color);
    paintPixel(x + 6, y + 1, color);

    paintPixel(x, y + 2, color);
    paintPixel(x + 7, y + 2, color);

    paintPixel(x, y + 3, color);
    paintPixel(x + 1, y + 3, color);
    paintPixel(x + 2, y + 3, color);
    paintPixel(x + 3, y + 3, color);
    paintPixel(x + 4, y + 3, color);
    paintPixel(x + 5, y + 3, color);
    paintPixel(x + 6, y + 3, color);

    paintPixel(x, y + 4, color);
    paintPixel(x + 5, y + 4, color);
    paintPixel(x + 6, y + 4, color);

    paintPixel(x, y + 5, color);
    paintPixel(x + 7, y + 5, color);

    paintPixel(x, y + 6, color);
    paintPixel(x + 5, y + 6, color);
    paintPixel(x + 6, y + 6, color);

    paintPixel(x, y + 7, color);
    paintPixel(x + 1, y + 7, color);
    paintPixel(x + 2, y + 7, color);
    paintPixel(x + 3, y + 7, color);
    paintPixel(x + 4, y + 7, color);
}

void drawLetterC(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".....................CCCC"  // Row 9
//     "...................CC...."  // Row 8
//     "..................C......"  // Row 7
//     ".................C......."  // Row 6
//     ".................C......."  // Row 5
//     "..................C......"  // Row 4
//     "...................CC...."   // Row 3
//     ".................S...CCCC"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0

    paintPixel(x + 4, y, color);
    paintPixel(x + 5, y, color);
    paintPixel(x + 6, y, color);
    paintPixel(x + 7, y, color);

    paintPixel(x + 2, y + 1, color);
    paintPixel(x + 3, y + 1, color);

    paintPixel(x + 1, y + 2, color);

    paintPixel(x, y + 3, color);

    paintPixel(x, y + 4, color);

    paintPixel(x + 1, y + 5, color);

    paintPixel(x + 2, y + 6, color);
    paintPixel(x + 3, y + 6, color);

    paintPixel(x + 4, y + 7, color);
    paintPixel(x + 5, y + 7, color);
    paintPixel(x + 6, y + 7, color);
    paintPixel(x + 7, y + 7, color);
}

void drawLetterD(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................DDDD...."  // Row 9
//     ".................D...DD.."  // Row 8
//     ".................D.....D."  // Row 7
//     ".................D......D"  // Row 6
//     ".................D......D"  // Row 5
//     ".................D.....D."  // Row 4
//     ".................D...DD.."  // Row 3
//     ".................SDDD...."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0

    paintPixel(x, y, color);
    paintPixel(x + 1, y, color);
    paintPixel(x + 2, y, color);
    paintPixel(x + 3, y, color);

    paintPixel(x, y + 1, color);
    paintPixel(x + 4, y + 1, color);
    paintPixel(x + 5, y + 1, color);

    paintPixel(x, y + 2, color);
    paintPixel(x + 6, y + 2, color);

    paintPixel(x, y + 3, color);
    paintPixel(x + 7, y + 3, color);

    paintPixel(x, y + 4, color);
    paintPixel(x + 7, y + 4, color);

    paintPixel(x, y + 5, color);
    paintPixel(x + 6, y + 5, color);

    paintPixel(x, y + 6, color);
    paintPixel(x + 4, y + 6, color);
    paintPixel(x + 5, y + 6, color);

    paintPixel(x, y + 7, color);
    paintPixel(x + 1, y + 7, color);
    paintPixel(x + 2, y + 7, color);
    paintPixel(x + 3, y + 7, color);
}
void drawLetterE(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................EEEEEEEE"  // Row 9
//     ".................EE......"  // Row 8
//     ".................EE......"  // Row 7
//     ".................EE......"  // Row 6
//     ".................EEEEEE.."  // Row 5
//     ".................EE......"  // Row 4
//     ".................EE......"  // Row 3
//     ".................SEEEEEEE"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0

    paintPixel(x, y, color);
    paintPixel(x + 1, y, color);
    paintPixel(x + 2, y, color);
    paintPixel(x + 3, y, color);
    paintPixel(x + 4, y, color);
    paintPixel(x + 5, y, color);
    paintPixel(x + 6, y, color);
    paintPixel(x + 7, y, color);

    paintPixel(x, y + 1, color);
    paintPixel(x + 1, y + 1, color);

    paintPixel(x, y + 2, color);
    paintPixel(x + 1, y + 2, color);

    paintPixel(x, y + 3, color);
    paintPixel(x + 1, y + 3, color);
    paintPixel(x + 2, y + 3, color);
    paintPixel(x + 3, y + 3, color);
    paintPixel(x + 4, y + 3, color);
    paintPixel(x + 5, y + 3, color);

    paintPixel(x, y + 4, color);
    paintPixel(x + 1, y + 4, color);

    paintPixel(x, y + 5, color);
    paintPixel(x + 1, y + 5, color);

    paintPixel(x, y + 6, color);
    paintPixel(x + 1, y + 6, color);

    paintPixel(x, y + 7, color);
    paintPixel(x + 1, y + 7, color);
    paintPixel(x + 2, y + 7, color);
    paintPixel(x + 3, y + 7, color);
    paintPixel(x + 4, y + 7, color);
    paintPixel(x + 5, y + 7, color);
    paintPixel(x + 6, y + 7, color);
    paintPixel(x + 7, y + 7, color);
}

void drawLetterF(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................FFFFFFFF"  // Row 9
//     ".................FF......"  // Row 8
//     ".................FF......"  // Row 7
//     ".................FFFFFF.."  // Row 6
//     ".................FF......"  // Row 5
//     ".................FF......"  // Row 4
//     ".................FF......"  // Row 3
//     ".................SF......"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0

    paintPixel(x, y, color);
    paintPixel(x + 1, y, color);

    paintPixel(x, y + 1, color);
    paintPixel(x + 1, y + 1, color);
}

void drawLetterG(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "...................GGGGG."  // Row 9
//     ".................GG.....G"  // Row 8
//     ".................G......."  // Row 7
//     ".................G......."  // Row 6
//     ".................G..GGGGG"  // Row 5
//     ".................G......G"  // Row 4
//     "..................GG...G."  // Row 3
//     ".................S.GGGG.."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterH(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................HH....HH"  // Row 9
//     ".................HH....HH"  // Row 8
//     ".................HH....HH"  // Row 7
//     ".................HHHHHHHH"  // Row 6
//     ".................HHHHHHHH"  // Row 5
//     ".................HH....HH"  // Row 4
//     ".................HH....HH"  // Row 3
//     ".................SH....HH"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterI(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................IIIIIIII"  // Row 9
//     "....................II..."  // Row 8
//     "....................II..."  // Row 7
//     "....................II..."  // Row 6
//     "....................II..."  // Row 5
//     "....................II..."  // Row 4
//     "....................II..."  // Row 3
//     ".................SIIIIIII"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterJ(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................JJJJJJJJ"  // Row 9
//     ".....................J..."  // Row 8
//     ".....................J..."  // Row 7
//     ".....................J..."  // Row 6
//     ".....................J..."  // Row 5
//     ".................J...J..."  // Row 4
//     ".................JJ.JJ..."  // Row 3
//     ".................SJJJ...."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterK(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................KK....KK"  // Row 9
//     ".................KK..KK.."  // Row 8
//     ".................KK.KK..."  // Row 7
//     ".................KKKK...."  // Row 6
//     ".................KKKK...."  // Row 5
//     ".................KK.KK..."  // Row 4
//     ".................KK..KK.."  // Row 3
//     ".................SK....KK"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterL(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................LL......"  // Row 9
//     ".................LL......"  // Row 8
//     ".................LL......"  // Row 7
//     ".................LL......"  // Row 6
//     ".................LL......"  // Row 5
//     ".................LL......"  // Row 4
//     ".................LLLLLLLL"  // Row 3
//     ".................SLLLLLLL"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterM(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................M......M"  // Row 9
//     ".................MM....MM"  // Row 8
//     ".................M.M..M.M"  // Row 7
//     ".................M..MM..M"  // Row 6
//     ".................M......M"  // Row 5
//     ".................M......M"  // Row 4
//     ".................M......M"  // Row 3
//     ".................S......M"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterN(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................NN.....N"  // Row 9
//     ".................NNN....N"  // Row 8
//     ".................N.N....N"  // Row 7
//     ".................N..N...N"  // Row 6
//     ".................N...N..N"  // Row 5
//     ".................N....N.N"  // Row 4
//     ".................N....NNN"  // Row 3
//     ".................S.....NN"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterO(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "...................OOOO.."  // Row 9
//     "..................OO..OO."  // Row 8
//     ".................O......O"  // Row 7
//     ".................O......O"  // Row 6
//     ".................O......O"  // Row 5
//     ".................O......O"  // Row 4
//     "..................OO..OO."  // Row 3
//     ".................S.OOOO.."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterP(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................PPPPP..."  // Row 9
//     ".................PP...PP."  // Row 8
//     ".................PP.....P"  // Row 7
//     ".................PP...PP."  // Row 6
//     ".................PPPPP..."  // Row 5
//     ".................PP......"  // Row 4
//     ".................PP......"  // Row 3
//     ".................SP......"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterQ(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "...................QQQQ.."  // Row 9
//     "..................QQ..QQ."  // Row 8
//     ".................Q......Q"  // Row 7
//     ".................Q......Q"  // Row 6
//     ".................Q......Q"  // Row 5
//     ".................Q...Q..Q"  // Row 4
//     "..................QQ..QQ."  // Row 3
//     ".................S.QQQQ.Q"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterR(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................RRRRR..."  // Row 9
//     ".................RR...RR."  // Row 8
//     ".................RR.....R"  // Row 7
//     ".................RR...RR."  // Row 6
//     ".................RRRRR..."  // Row 5
//     ".................RR..RR.."  // Row 4
//     ".................RR...RR."  // Row 3
//     ".................SR....RR"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterS(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "....................SSSSS"  // Row 9
//     "..................SSS...."  // Row 8
//     ".................SS......"  // Row 7
//     "..................SSSS..."  // Row 6
//     "....................SSSS."  // Row 5
//     ".......................SS"  // Row 4
//     ".....................SSS."  // Row 3
//     ".................SSSSS..."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterT(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "................TTTTTTTT"  // Row 9
//     "...................TT...."  // Row 8
//     "...................TT...."  // Row 7
//     "...................TT...."  // Row 6
//     "...................TT...."  // Row 5
//     "...................TT...."  // Row 4
//     "...................TT...."  // Row 3
//     ".................S.TT...."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterU(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................U......U"  // Row 9
//     ".................U......U"  // Row 8
//     ".................U......U"  // Row 7
//     ".................U......U"  // Row 6
//     ".................U......U"  // Row 5
//     ".................U......U"  // Row 4
//     "..................U....U."  //......
//     ".................S.UUUU.."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterV(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................V......V"  // Row 9
//     ".................V......V"  // Row 8
//     ".................V......V"  // Row 7
//     "..................V....V."  // Row 6
//     "..................V....V."  // Row 5
//     "...................V..V.."  // Row 4
//     "...................V..V.."  // Row 3
//     ".................S..VV..."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterW(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................W......W"  // Row 9
//     ".................W......W"  // Row 8
//     ".................W......W"  // Row 7
//     ".................W......W"  // Row 6
//     ".................W..WW..W"  // Row 5
//     ".................W..WW..W"  // Row 4
//     "..................W.WW.W."  // Row 3
//     ".................S.W..W.."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterX(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................X......X"  // Row 9
//     "..................X....X."  // Row 8
//     "...................X..X.."  // Row 7
//     "....................XX..."  // Row 6
//     "....................XX..."  // Row 5
//     "...................X..X.."  // Row 4
//     "..................X....X."  // Row 3
//     ".................S......X"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterY(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................Y......Y"  // Row 9
//     "..................Y....Y."  // Row 8
//     "...................Y..Y.."  // Row 7
//     "....................YY..."  // Row 6
//     "....................YY..."  // Row 5
//     "....................YY..."  // Row 4
//     "....................YY..."  // Row 3
//     "..................S.YY..."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

void drawLetterZ(char x, char y, ColorType color) {
//     "........................."  // Row 11
//     "........................."  // Row 10
//     ".................ZZZZZZZZ"  // Row 9
//     "......................ZZ."  // Row 8
//     ".....................ZZ.."  // Row 7
//     "....................ZZ..."  // Row 6
//     "...................ZZ...."  // Row 5
//     "..................ZZ....."  // Row 4
//     ".................ZZ....."  // Row 3
//     ".................SZZZZZZZ"  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
}

// const char* blank = 
//     "........................."  // Row 11
//     "........................."  // Row 10
//     "........................."  // Row 9
//     "........................."  // Row 8
//     "........................."  // Row 7
//     "........................."  // Row 6
//     "........................."  // Row 5
//     "........................."  // Row 4
//     "........................."  // Row 3
//     "........................."  // Row 2
//     "........................."  // Row 1
//     "........................."; // Row 0
