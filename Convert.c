#include "Types.h"

/******************************************/
/* Externs */
/******************************************/
extern const char* MajorColorNames_au8;
extern const char* MinorColorNames_au8;

/******************************************/
/* Globar variables */
/******************************************/
int numberOfMajorColors_u8 =
    sizeof(MajorColorNames_au8) / sizeof(MajorColorNames_au8[0]);


int numberOfMinorColors_u8 =
    sizeof(MinorColorNames_au8) / sizeof(MinorColorNames_au8[0]);

/******************************************/
/* GetColorFromPairNumber */
/******************************************/
ColorPair_tst GetColorFromPairNumber(int pairNumber_u8) {
    ColorPair_tst colorPair_st;
    int zeroBasedPairNumber_u8 = pairNumber_u8 - 1;
    colorPair_st.majorColor_en =
        (enum MajorColor_ten)(zeroBasedPairNumber_u8 / numberOfMinorColors_u8);
    colorPair_st.minorColor_en =
        (enum MinorColor_ten)(zeroBasedPairNumber_u8 % numberOfMinorColors_u8);
    return colorPair_st;
}

/******************************************/
/* GetPairNumberFromColor */
/******************************************/
int GetPairNumberFromColor(const ColorPair_tst* colorPair_st) {
    return colorPair_st->majorColor_en * numberOfMinorColors_u8 +
            colorPair_st->minorColor_en + 1;
}


