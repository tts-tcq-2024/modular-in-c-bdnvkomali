#include "color_pair.h"
#include <stdio.h>

void PrintColorCode(void) {
    printf("Color Coding :\n");
    for (int major = 0; major < numberOfMajorColors; major++) {
        for (int minor = 0; minor < numberOfMinorColors; minor++) {
            ColorPair colorPair;
            colorPair.majorColor = (enum MajorColor)major;
            colorPair.minorColor = (enum MinorColor)minor;
            int pairNumber = GetPairNumberFromColor(&colorPair);
            printf("Pair Number: %d, Color: %s %s\n",
                pairNumber,
                MajorColorNames[major],
                MinorColorNames[minor]);
        }
    }
}
