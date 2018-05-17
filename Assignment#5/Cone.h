// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Cone header file of the Assignment 5. It calculates the Cone's volume and area.

#ifndef Cone_h
#define Cone_h
#include "ThreeDShape.h"
#include <cmath>

class Cone: public ThreeDShape {
protected:
    //protected members
    long double height;
    long double radius;
    
public:
    Cone()//constructor
    {
    }
    ~Cone()//destructor
    {
    }
    Cone(long double r, long double h)
    {
        radius = r;
        height =h;
    }
    long double getSurfaceArea() const
    {
        return (PI*radius*(radius+sqrt((height*height)+(radius*radius))));
    }
    long double getVolume() const
    {
        return (PI*radius*radius*(height/3.0));
    }
    std::string to_string() const;

};

#endif /* Cone_h */
