#pragma once

#include <array>
#include <iostream>

struct Dot
{
    Dot(double x, double y, double z) : x{ x }, y{ y }, z{ z }
    {

    }
    Dot() : x{ NULL }, y{ NULL }, z{ NULL }
    {

    }
    double x, y, z;

};

class Figure
{
protected:
    virtual double Derivative(double t) = 0;

    virtual std::array<double, 3> VectorOfDerivative(double t) = 0;

};

