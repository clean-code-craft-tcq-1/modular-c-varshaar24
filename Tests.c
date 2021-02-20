#include <stdio.h>
#include <assert.h>
#include "Types.h"

void testNumberToPair(int pairNumber,
    enum MajorColor_ten expectedMajor,
    enum MinorColor_ten expectedMinor)
{
    ColorPair_tst colorPair_st = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair_st, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair_st.majorColor_en == expectedMajor);
    assert(colorPair_st.minorColor_en == expectedMinor);
}

void testPairToNumber(
    enum MajorColor_ten major,
    enum MinorColor_ten minor,
    int expectedPairNumber)
{
    ColorPair_tst colorPair_st;
    colorPair_st.majorColor_en = major;
    colorPair_st.minorColor_en = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair_st);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
