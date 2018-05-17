// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Box.cpp file of the Assignment 5. It formats the output using to_string()

#include <stdio.h>
#include "Box.h"

std::string Box::to_string() const
{
    //takes in height, width, and depth
    return "Box(" + std::to_string(height) + " x " + std::to_string(width) + " x " + std::to_string(depth) +")";
}
