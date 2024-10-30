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
    CRGB rgbColor;
    CHSV hsvColor;

    for (int i = 0; i < NUM_LEDS; ++i) {
        rgbColor = leds[i];
        hsvColor = rgb2hsv_approximate(rgbColor);

        hsvColor.value *= 0.8;
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
        else if (random8() < 32) {
            drops[i].x = random8(XDIM);
            drops[i].y = YDIM;
            drops[i].isAlive = true;
        }
    }

    FastLED.show();
}

// bool allSpots = true;
// char screenWipeCount = 11;
// char spotsTimer = 0;

// void designSpots() {
//     if (!allSpots) {
//         allSpots = true;

//         for (char i = 0; i < NUM_DROPS; ++i) {
//             if (drops[i].isAlive) {
//                 if (drops[i].aliveCount == 3) {
//                     continue;
//                 }

//                 allSpots = false;

//                 for (unsigned char j = drops[i].x - drops[i].aliveCount; j < drops[i].x + drops[i].aliveCount + 1; ++j) {
//                     for (unsigned char k = drops[i].y - drops[i].aliveCount; k < drops[i].y + drops[i].aliveCount + 1; ++k) {
//                         paintPixel(j, k, drops[i].color);
//                     }
//                 }

//                 drops[i].aliveCount++;
//             }
//             else if (random8() < 16) {
//                 drops[i].isAlive = true;
//                 drops[i].x = random8(3, 22);
//                 drops[i].y = random8(3, 9);
//                 drops[i].aliveCount = 0;
//                 drops[i].color = (ColorType) random8(0, 12);
//             }
//         }
//     }
//     else {
//         if (screenWipeCount == 11 && spotsTimer != 20) {
//             spotsTimer++;
//         }
//         else {

//             for (char x = 0; x < 25; ++x) {
//                 paintPixel(x, screenWipeCount, COLOR_OFF);
//             }

//             screenWipeCount--;

//             if (screenWipeCount < 0) {
//                 screenWipeCount = 11;
//                 allSpots = false;
//                 spotsTimer = 0;

//                 for (char i = 0; i < NUM_DROPS; ++i) {
//                     drops[i].isAlive = false;
//                 }
//             }
//         }
//     }

//     FastLED.show();
// }
// void drawHeart(char x, char y, ColorType color) {
//     // ".P.P." // Row 1
//     // "PPPPP" // Row 2
//     // ".PPP." // Row 3
//     // "..P.." // Row 4

//     //Row 2
//     paintPixel(x - 2, y, color);
//     paintPixel(x - 1, y, color);
//     paintPixel(x, y, color);
//     paintPixel(x + 1, y, color);
//     paintPixel(x + 2, y, color);

//     //Row 1
//     paintPixel(x - 1, y + 1, color);
//     paintPixel(x + 1, y + 1, color);

//     //Row 3
//     paintPixel(x - 1, y - 1, color);
//     paintPixel(x, y - 1, color);
//     paintPixel(x + 1, y - 1, color);

//     //Row 4
//     paintPixel(x, y, color);
// }

// void designFallingHearts() {
//     fill_solid(leds, NUM_LEDS, CRGB(0, 0, 0));

//     for (char i = 0; i < 5; ++i) {
//         if (drops[i].isAlive) {
//             drawHeart(drops[i].x, drops[i].y, drops[i].color);

//             drops[i].y--;

//             if (drops[i].y < 2) {
//                 drops[i].isAlive = false;
//             }

//         }
//         else if (random(8) < 32) {
//             drops[i].x = i * 3;
//             drops[i].y = 10;
//             drops[i].isAlive = true;
//             drops[i].color = COLOR_PINK; 
//         }
//     }

//     FastLED.show();
// }

// const char* blank = 
//     "........................."  // Row 1
//     "........................."  // Row 2
//     "........................."  // Row 3
//     "........................."  // Row 4
//     "........................."  // Row 5
//     "........................."  // Row 6
//     "........................."  // Row 7
//     "........................."  // Row 8
//     "........................."  // Row 9
//     "........................."  // Row 10
//     "........................."  // Row 11
//     "........................."; // Row 12
