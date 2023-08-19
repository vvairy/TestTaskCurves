#pragma once

#include <cmath>
#include <array>
#include "figure.h"


class Circle : public Figure
{
public:
    Circle(double r, double t);
    double Derivative(double t) override;
    std::array<double, 3> VectorOfDerivative(double t) override;
    double r;
    Dot dot;
};