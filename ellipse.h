#pragma once
#include <cmath>
#include <array>
#include "figure.h"

class Ellipse : public Figure
{
public:
    Ellipse(double a, double b, double t);
    double Derivative(double t) override;
    std::array<double, 3> VectorOfDerivative(double t) override;
    double a, b;
private:
    Dot dot;
};