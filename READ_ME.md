CRT TV Head Costume

This project powers a CRT TV Head Halloween costume, built using an Arduino-Uno microcontroller and WS2812B LEDs. The code controls dynamic LED patterns, handles button/PS-2 input for selecting designs/displaying custom text, and includes reusable LED functions.
Table of Contents

    Introduction
    Features
    Hardware Requirements
    Software Requirements
    Setup
    Code Overview
        crt.ino
        designs.ino
    License

Introduction

This repository contains the firmware for a wearable CRT TV head with a LED matrix as its "screen." It is designed for cosplay or Halloween, displaying a variety of animated patterns and effects.
Features

    Dynamic LED Designs: Includes designs like blinking eyeballs, matrix rain, bouncing DVD logo, and more.
    Button Control: Switch between patterns with a single button press or keyboard input.
    Compact Design: Optimized for Arduino-Uno microcontrollers.
    Customizable: Easily add new designs and modify LED configurations.

Hardware Requirements

    Microcontroller: Arduino Uno, Nano, or equivalent.
    LEDs: WS2812B (Neopixel) strip, at least 300 LEDs for 1-1 code reuse.
    Button: Momentary push button for switching designs.
    Keyboard: PS-2 Keyboard for text input and design selection.
    Power Supply: 5V power supply capable of providing sufficient current for your LED array.

Software Requirements

    Arduino IDE
    FastLED library (installed via Library Manager)

Setup

    Clone the Repository:

    git clone https://github.com/Emerald-Bay/TV-Head-Codebase.git
    cd TV-Head-Codebase

    Open in Arduino IDE:
        Open crt.ino as the main file.
        Ensure designs.ino is in the same folder as crt.ino.

    Install Dependencies:
        In the Arduino IDE, go to Sketch > Include Library > Manage Libraries.
        Search for and install the FastLED library.

    Connect Hardware:
        Connect WS2812B data pin to pin 6 on the microcontroller.
        Attach a momentary push button to pin 7 (use a pull-up resistor or the INPUT_PULLUP mode).
        Attach the 5V, Ground, and Data lines for the PS-2 Keyboard to associated pins.
        Power the system with a 5V supply.
        Power the LED Array with 5V and Ground (2-4 Amps depending on desired brightenness.

    Upload Code:
        Select the appropriate board and port in the Arduino IDE.
        Compile and upload the code to the microcontroller.

Code Overview
crt.ino

This file contains:

    Setup and Loop: Initializes LEDs, button state, and patterns. The loop() handles design switching and animates specific patterns.
    Functions:
        paintPixel(): Converts x/y grid coordinates to LED indices and sets colors.
        getLEDIndex(): Determines LED strip index based on matrix layout.
        getColorType(): Maps predefined colors to HSV values.
        nextDesign(): Cycles to the next design pattern.

designs.ino

This file:

    Defines individual LED designs as functions, utilizing custom code to display a variety of fun/dynamic designs. 
    Also included are several helper functions to assist in the more complex designs like life, text display, etc.

License

This project is licensed under the MIT License. You are free to use, modify, and distribute this code as long as proper credit is given.

Let me know if you'd like any specific edits or additional sections!
