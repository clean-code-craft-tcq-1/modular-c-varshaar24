#include <stdio.h>
#include "Types.h"

extern const int MAX_COLORPAIR_NAME_CHARS;

const char* MajorColorNames_au8[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames_au8[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors_u8 =
    sizeof(MajorColorNames_au8) / sizeof(MajorColorNames_au8[0]);


int numberOfMinorColors_u8 =
    sizeof(MinorColorNames_au8) / sizeof(MinorColorNames_au8[0]);

void ColorPairToString(const ColorPair_tst* colorPair_st, char* buffer_au8) {
    sprintf(buffer_au8, "%s %s",
        MajorColorNames_au8[colorPair_st->majorColor_en],
        MinorColorNames_au8[colorPair_st->minorColor_en]);
}

void DisplayColourPairForm(void)
{
    for(int colournum =1;colournum<=25;colournum++)
    {
        printf("%d ->",colournum);

        ColorPair_tst EachColurPair_st = GetColorFromPairNumber(colournum);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&EachColurPair_st, colorPairNames);
        printf("%s\n",colorPairNames);
    }
}
