// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Box header file of the Assignment 5. It calculates the Box's volume and area.


#ifndef Box_h
#define Box_h
#include "ThreeDShape.h"

class Box: public ThreeDShape {
protected:
    //protected members
    long double height;
    long double width;
    long double depth;

public:
    Box()//constructor
    {
    }
    ~Box()//destructor
    {
    }
    Box(long double h, long double w, long double d)
    {
        height = h;
        width = w;
        depth = d;
    }
    long double getSurfaceArea() const
    {
        long double a, b, c;
        //assignment to make formula easier
        a=width;
        b=height;
        c=depth;
        return (2*((a*b)+(b*c)+(a*c)));
    }
    long double getVolume() const
    {
        return (width*height*depth);
    }
    std::string to_string() const;

};


#endif /* Box_h */
