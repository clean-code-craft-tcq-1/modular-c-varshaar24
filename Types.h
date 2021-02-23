#ifndef TYPES_H
#define TYPES_H

/******************************************/
/* Defines */
/******************************************/

/******************************************/
/* Globar variables */
/******************************************/
const char* MajorColorNames_au8[];

const char* MinorColorNames_au8[];

const int MAX_COLORPAIR_NAME_CHARS ;

int numberOfMajorColors_u8;


int numberOfMinorColors_u8;
	
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
void testNumberToPair(int pairNumber,
    enum MajorColor_ten expectedMajor,
    enum MinorColor_ten expectedMinor);
void testPairToNumber(
    enum MajorColor_ten major,
    enum MinorColor_ten minor,
    int expectedPairNumber);


#endif



