// Assignment 5 Part 1 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: ThreeDShape header file of the Assignment 5. It is an abstract file.

#ifndef ThreeDShape_h
#define ThreeDShape_h
#include <string>

class ThreeDShape
{
protected:  // protected members
    static constexpr long double PI = 3.14159265358979323846264338327950288419716939937510L;

public:

    bool operator<(const ThreeDShape &rhs) const
    {
        if(getVolume() < rhs.getVolume()) //if the volume smaller that rhs
            return true;
        return false;
    }
    // Create public virtual functions
    virtual ~ThreeDShape() //destructor
    {
    }
    virtual long double getSurfaceArea() const = 0;
    virtual long double getVolume() const = 0;
    virtual std::string to_string() const = 0;
};

//inline functions
inline std::ostream& operator<< (std::ostream& outputStream,
                          const ThreeDShape& shape)
{
    outputStream << shape.to_string();
    return outputStream;
}

inline bool comp(const ThreeDShape *lhs, const ThreeDShape *rhs)
{
    return (*lhs < *rhs);
}
#endif /* ThreeDShape_h */
