#include <iostream>

#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED

enum Color
{
    blue,
    red,
    black,
    clear,
    grey
};

enum PenStyle
{
    ballpoint,
    felt_tip,
    fountain_pen
};

class Pen
{
public:
    Color inkColor;
    Color shellColor;
    Color capColor;
    PenStyle style;
    float length;
    std::string brand;
    int inkLevelPercent;

    void writeOnPaper(std::string words);
    void breakInHalf();
    void runOutOfInk();
}

#endif // PEN_H_INCLUDED