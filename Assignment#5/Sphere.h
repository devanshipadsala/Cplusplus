// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Sphere header file of the Assignment 5. It calculates the Sphere's volume and area.


#ifndef Sphere_h
#define Sphere_h
#include "ThreeDShape.h"

class Sphere: public ThreeDShape {
protected:
    long double radius; //protected member
public:
    Sphere() //constructor
    {
    }
    ~Sphere() //destructor
    {
    }
    Sphere(long double rad)
    {
        radius = rad;
    }
    virtual long double getSurfaceArea() const
    {
        return (4*PI*radius*radius);
    }
    virtual long double getVolume() const
    {
        return ((4.0/3.0)*(PI*radius*radius*radius));
    }
    virtual std::string to_string() const;

};

#endif /* Sphere_h */
