#include "Types.h"

ColorPair_tst GetColorFromPairNumber(int pairNumber) {
    ColorPair_tst colorPair_st;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair_st.majorColor = 
        (enum MajorColor_ten)(zeroBasedPairNumber / numberOfMinorColors_u8);
    colorPair_st.minorColor =
        (enum MinorColor_ten)(zeroBasedPairNumber % numberOfMinorColors_u8);
    return colorPair_st;
}

int GetPairNumberFromColor(const ColorPair_tst* colorPair_st) {
    return colorPair_st->majorColor * numberOfMinorColors_u8 +
            colorPair_st->minorColor + 1;
}
