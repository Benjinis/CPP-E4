#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<int> e);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    Vector& operator+(const Vector& rhs);
    Vector& operator+=(const int& n);

    Vector& operator*=(const int& n);
    Vector& operator*(const int& n);
    int operator*(const Vector& rhs);

    Vector& operator-=(const Vector& rhs);

    int operator[](const int n) const;
    int& operator[](const int n);
    



    // More to go

private:
// Private Member functions here
int coordonne[NDIM];
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
std::ostream& operator << (std::ostream& os, const Vector& v);