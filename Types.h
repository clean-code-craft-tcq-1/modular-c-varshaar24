#ifndef TYPES_H
#define TYPES_H

/******************************************/
/* Defines */
/******************************************/


/******************************************/
/* Globar variables */
/******************************************/
const char* MajorColorNames_au8[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames_au8[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;

int numberOfMajorColors_u8 =
    sizeof(MajorColorNames_au8) / sizeof(MajorColorNames_au8[0]);


int numberOfMinorColors_u8 =
    sizeof(MinorColorNames_au8) / sizeof(MinorColorNames_au8[0]);
	
/******************************************/
/* Enums */
/******************************************/

enum MajorColor_ten {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor_ten {BLUE, ORANGE, GREEN, BROWN, SLATE};


/******************************************/
/* Structs */
/******************************************/
typedef struct {
    enum MajorColor_ten majorColor_en;
    enum MinorColor_ten minorColor_en;
} ColorPair_tst;


/******************************************/
/* Prototypes */
/******************************************/
void ColorPairToString(const ColorPair_tst* colorPair_st, char* buffer_au8);
ColorPair_tst GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair_tst* colorPair_st);


#endif



