// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Cone.cpp file of the Assignment 5. It formats the output using to_string()


#include <stdio.h>
#include "Cone.h"

std::string Cone::to_string() const
{
    //takes in radius and height
    return "Cone(" + std::to_string(height) +", "+ std::to_string(radius) +")";
}
