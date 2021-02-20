#include <stdio.h>
#include "Types.h"

void ColorPairToString(const ColorPair_tst* colorPair_st, char* buffer_au8) {
    sprintf(buffer_au8, "%s %s",
        MajorColorNames_au8[colorPair_st->majorColor_en],
        MinorColorNames_au8[colorPair_st->minorColor_en]);
}
