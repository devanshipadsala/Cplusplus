// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Main function of the Assignment 5. It outputs the volume, area, and shape of the Sphere, Box, and Cone

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

//including the header files
#include "ThreeDShape.h"
#include "Sphere.h"
#include "Box.h"
#include "Cone.h"

//start of class Shapes
class Shapes
{
private:
    std::vector<ThreeDShape*> shapes;
public:
    //constructor
    Shapes();
    
    //destructor
    ~Shapes();
    void sort();
    void display() const;
};

//start of function main()
int main()
{
    Shapes shapes;
    
    std::cout << "Shapes - unsorted" << std::endl << std::endl;
    
    shapes.display();
    
    shapes.sort();
    
    std::cout << std::endl;
    std::cout << "Shapes - sorted" << std::endl << std::endl;
    
    shapes.display();
    
    return 0;
}
//end of function main()

Shapes::Shapes()
{
    //uses the functions in header
    shapes.push_back(new Sphere(10.4L));
    shapes.push_back(new Box(10.3L, 20.2L, 34.5L));
    shapes.push_back(new Cone(21.0L, 14.0L));
    shapes.push_back(new Sphere(21.5L));
    shapes.push_back(new Box(20.0L, 40.0L, 50.0L));
    shapes.push_back(new Cone(34.5L, 63.4L));
    shapes.push_back(new Sphere(4.2L));
}


Shapes::~Shapes()
{
    for (auto item : shapes)
    {
        delete item;
    }
}

void Shapes::sort()
{
    std::sort(shapes.begin(), shapes.end(), comp);
}

void Shapes::display() const
{
    const unsigned int VOLUME_WIDTH = 10;
    const unsigned int AREA_WIDTH = 10;
    //formats the output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(VOLUME_WIDTH) << "Volume"
    << std::setw(AREA_WIDTH) << "Area"
    << "  Shape" << std::endl;
    for (auto item : shapes)
    {
        //outputs the data calculated in the header files
        std::cout << std::setw(VOLUME_WIDTH);
        std::cout << item->getVolume();
        std::cout << std::setw(AREA_WIDTH);
        std::cout << (*item).getSurfaceArea();
        std::cout << "  " << *item;
        std::cout << std::endl;
    }
}
