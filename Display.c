#include <stdio.h>
#include "Types.h"

const char* MajorColorNames_au8[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames_au8[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

void ColorPairToString(const ColorPair_tst* colorPair_st, char* buffer_au8) {
    sprintf(buffer_au8, "%s %s",
        MajorColorNames_au8[colorPair_st->majorColor_en],
        MinorColorNames_au8[colorPair_st->minorColor_en]);
}
