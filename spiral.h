#pragma once
#include "figure.h"
#include <cmath>

class Spiral : public Figure
{
public:
    Spiral(double r, double t);
    double Derivative(double t) override;
    std::array<double, 3> VectorOfDerivative(double t) override;
    double r;
private:
    Dot dot;
    double r;
};
