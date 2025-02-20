#include <iostream>
#include "pen.h"

void Pen::writeOnPaper(std::string words)
{
    if (inkLevelPercent <= 0)
    {
        std::cout << "oops! out of ink" << std::endl;
    }
    else
    {
        std::cout << words << std::endl;
        inkLevelPercent = inkLevelPercent - words.length();
    }
}

void Pen::breakInHalf()
{
    inkLevelPercent = inkLevelPercent / 2;
    length = length / 2.0;
}

void Pen::runOutOfInk()
{
    inkLevelPercent = 0;
}

void fixInk(Pen *myPen) {
    myPen -> runOutOfInk();
}

void repairInk(Pen &myPen) 
{
    myPen.runOutOfInk();
}

int main()
{
    Pen favoritePen;
    favoritePen.inkColor = blue;
    favoritePen.shellColor = grey;
    favoritePen.capColor = blue;
    favoritePen.style = ballpoint;
    favoritePen.length = 5.5;
    favoritePen.brand = "office depot";
    favoritePen.inkLevelPercent = 30;

    Pen worstPen;
    worstPen.inkColor = red;
    worstPen.shellColor = red;
    worstPen.capColor = black;
    worstPen.style = fountain_pen;
    worstPen.length = 5.0;
    worstPen.brand = "parker";
    worstPen.inkLevelPercent = 60;

    std::cout << "favorite pen" << std::endl;
    std::cout << "color: " << favoritePen.inkColor << std::endl;
    std::cout << "branch: " << favoritePen.brand << std::endl;
    std::cout << "ink level: " << favoritePen.inkLevelPercent << "%" << std::endl;

    favoritePen.writeOnPaper("hello I am a pen");
    std::cout << "ink level: " << favoritePen.inkLevelPercent << "%" << std::endl;

    Pen *myPen = new Pen;
    myPen -> inkColor = red; // arrow operator access Pen properties
    (*myPen).inkColor = red;

    delete myPen; // delete object to free object memory from the heap
    myPen = nullptr; // delete pointer
}