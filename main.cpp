#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <memory>
#include <ctime>

#include "figure.h"
#include "circle.h"
#include "ellipse.h"
#include "spiral.h"

std::shared_ptr<Figure> takeRandomCurve()
{
    const double PI = 3.1415;
    switch (rand() % 3)
    {
    case 0:
    {
        std::shared_ptr<Circle> circle(new Circle(1 + rand() % 10, PI / 4));
        return circle;
    }
    case 1:
    {
        std::shared_ptr<Ellipse> ellipse(new Ellipse(1 + rand() % 10, 10 + rand() % 10, PI / 4));
        return ellipse;
    }
    case 2:
    {
        std::shared_ptr<Spiral> spiral(new Spiral(1 + rand() % 10, PI / 4));
        return spiral;
    }
    }
}

bool compareRadiuses(std::shared_ptr<Circle> circle1, std::shared_ptr<Circle> circle2)
{
    return circle1->r < circle2->r;
}

int main()
{
    srand(time(NULL));
    std::vector<std::shared_ptr<Figure>> figures;
    std::vector<std::shared_ptr<Circle>> circles;
    for (int i = 0; i < 30; ++i)
        figures.push_back(takeRandomCurve());
    for (std::shared_ptr<Figure> figure : figures)
        if (std::dynamic_pointer_cast<Circle>(figure)) //returns nullptr(which converts to false) if it is circle
            circles.push_back(std::static_pointer_cast<Circle>(figure));
    std::sort(circles.begin(), circles.end(), compareRadiuses);
    std::cout << "Sorted Radiuses:\n";
    for (std::shared_ptr<Circle> el : circles)
        std::cout << el->r << " ";
}