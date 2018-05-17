// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Sphere.cpp file of the Assignment 5. It formats the output using to_string()


#include <iostream>
#include <string>
#include "Sphere.h"

std::string Sphere::to_string() const
{
    //takes in radius
    return "Sphere(" + std::to_string(radius) + ")";
}

