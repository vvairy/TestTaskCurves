#include "spiral.h"
Spiral::Spiral(double r, double t) : r{ r }
{
    this->dot = Dot{ cos(t), sin(t), t };
}
double Spiral::Derivative(double t)
{
    return -tan(t);
}
std::array<double, 3> Spiral::VectorOfDerivative(double t)
{
    return { 1, -tan(t), t };
}