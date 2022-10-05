
#include <ostream>

#include "vector.hh"
#include <vector>
#include <string.h>

Vector::Vector()
{
    for(int i=0; i<NDIM; i = i+1)
    {
        this->coordonne[i]=0;
    }
}

Vector::Vector(std::initializer_list<int> e)
{
    for(int i=0; i<NDIM; i = i+1)
    {
        this->coordonne[i]=std::data(e)[i];
    }
}


Vector& Vector::operator+=(const Vector& rhs)
{
    for (int i=0; i<NDIM; i = i+1)
    {
        this-> coordonne[i]+= rhs.coordonne[i];
    }
    return *this;
}

Vector& Vector::operator+(const Vector& rhs)
{
    Vector V;
    for (int i=0; i < NDIM; i = i=1)
    {
        V.coordonne[i] = rhs.coordonne[i] + this->coordonne[i];
    }
    return V;
}

Vector& Vector::operator+=(const int& n)
{
    for (int i=0; i<NDIM; i = i+1)
    {
        this-> coordonne[i]+= n;
    }
    return *this;
}

Vector& Vector::operator*=(const int& n)
{
    for (int i=0; i<NDIM; i = i+1)
    {
        this-> coordonne[i]*= n;
    }
    return *this;
}


Vector& Vector::operator*(const int& n)
{
    for (int i=0; i<NDIM; i = i+1)
    {
        this-> coordonne[i]*= n;
    }
    return *this;
}

int Vector::operator*(const Vector& rhs)
{
    int m=0;
    for (int i=0; i<NDIM; i = i+1)
    {
        m = m + this-> coordonne[i] * rhs.coordonne[i];
    }
    return m;
}

Vector& Vector::operator-=(const Vector& rhs)
{
    for (int i=0; i<NDIM; i = i+1)
    {
        this-> coordonne[i]-= rhs.coordonne[i];
    }
    return *this;
}

int Vector::operator[](const int n) const
{
    return this->coordonne[n];
}

int& Vector::operator[](const int n)
{
    return this->coordonne[n];
}

std::ostream& operator << (std::ostream& os, const Vector& rhs)
{
    os << "{";
    for (int i=0; i<NDIM; i = i+1)
    {
        os << rhs[i] << ", ";
    }
    os << rhs[NDIM-1] << "}";
}