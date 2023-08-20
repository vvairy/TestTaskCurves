#include "ellipse.h"
Ellipse::Ellipse(double a, double b, double t) : a{ a }, b{ b }
{
    if (a <= 0 or b <= 0 or a == b)
        throw std::exception("incorrect lenght(s)");
    this->dot = Dot{ this->a * cos(t), this->b * sin(t), 0.00 };
}

double Ellipse::Derivative(double t)
{
    return -this->a / this->b * tan(t); //check method "Derivative" in class "Circle"
}

std::array<double, 3> Ellipse::VectorOfDerivative(double t)
{
    return { 1, -a / b * tan(t), 0.00 };
}