// Box.h
#ifndef BOX_H
#define BOX_H
#include <iostream>
#include <iomanip>
#include <algorithm>              // For max() and min() function templates
using namespace std;
class Box
{
private:
  double length {1.0};
  double width {1.0};
  double height {1.0};

public:
  // Constructors
  Box(double lv, double wv, double hv)
    : length {max(lv, wv)}, width {min(lv, wv)}, height {hv} {}//This part of the code is called the member initializer list, and it's used to initialize the member variables of the Box class. In this case, the constructor is initializing three member variables: length, width, and height
  Box() = default;

  double volume() const                                    // Function to calculate the volume
  {
    return length*width*height;
  }

  // Accessors
  double getLength() const { return length; }
  double getWidth() const  { return width; }
  double getHeight() const { return height; }

  bool operator<(const Box& aBox) const;                   // Less-than operator
  bool operator<(double aValue) const;                     // Compare Box volume < double value
  
  Box operator+(const Box& aBox) const;                    // Function to add two Box objects
  Box operator*(unsigned n) const;                         // Post-multiply an object by an integer
};

// Less-than comparison for Box objects
inline bool Box::operator<(const Box& aBox) const
{
  return volume() < aBox.volume();
}

// Compare the volume of a Box object with a constant
inline bool Box::operator<(double aValue) const 
{
  return volume() < aValue;
}

// Function comparing a constant with volume of a Box object
inline bool operator<(double aValue, const Box& aBox)
{
  return aValue < aBox.volume();
}

// Operator function to add two Box objects
inline Box Box::operator+(const Box& aBox) const
{
  // New object has larger length and width, and sum of heights
  return Box { max(length, aBox.length),
               max(width, aBox.width),
               height + aBox.height };
}

// Post-multiply an object by an integer
inline Box Box::operator*(unsigned n) const
{
  return Box{length, width, n*height};
}

// Stream output operator
ostream& operator<<(ostream& stream, const Box& box)
{
  return stream << "Box(" 
    << setw(2) << box.getLength() << ','
    << setw(2) << box.getWidth()  << ','
    << setw(2) << box.getHeight() << ')';
}

#endif