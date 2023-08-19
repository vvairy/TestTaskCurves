#include "circle.h"

Circle::Circle(double r, double t) : r{ r }
{
    if (r <= 0)
        throw std::exception("non-positive lenght(s)");
    this->dot = Dot{ this->r * cos(t), this->r * sin(t), 0.00 };
}

double Circle::Derivative(double t)
{
    return -tan(t);
}

std::array<double, 3> Circle::VectorOfDerivative(double t)
{
    return { 1, -tan(t), 0.00 };
}