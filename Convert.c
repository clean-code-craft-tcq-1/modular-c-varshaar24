#include "Types.h"

ColorPair_tst GetColorFromPairNumber(int pairNumber_u8) {
    ColorPair_tst colorPair_st;
    int zeroBasedPairNumber_u8 = pairNumber_u8 - 1;
    colorPair_st.majorColor_en = 
        (enum MajorColor_ten)(zeroBasedPairNumber_u8 / numberOfMinorColors_u8);
    colorPair_st.minorColor_en =
        (enum MinorColor_ten)(zeroBasedPairNumber_u8 % numberOfMinorColors_u8);
    return colorPair_st;
}

int GetPairNumberFromColor(const ColorPair_tst* colorPair_st) {
    return colorPair_st->majorColor_en * numberOfMinorColors_u8 +
            colorPair_st->minorColor_en + 1;
}

