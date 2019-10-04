#include <cmath>
#include "Circle.h"

namespace Shapes {

    Circle::Circle() : TwoDShape() {
        this->radiusPoint = Point(0, 0, 0);
    }

    Circle::Circle(int firstX, int firstY, int secondX, int secondY) : TwoDShape("Circle", Point(firstX, firstY, 0)) {
        this->radiusPoint = Point(secondX, secondY, 0);
    }

    void Circle::printInformation() {
        TwoDShape::printInformation();
        std::cout << "Second point is " << this->radiusPoint << std::endl;
        std::cout << "Area is " << this->getArea() << std::endl;
    }

    double Circle::getArea() {
        double radius = this->firstPoint.getLength(this->radiusPoint);
        return M_PI * radius * radius;
    }
}
