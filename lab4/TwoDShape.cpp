#include "TwoDShape.h"

namespace Shapes {
    TwoDShape::TwoDShape() : Shape() {
        this->firstPoint = Point(0, 0, 0);
    }

    TwoDShape::TwoDShape(const std::string &shapeName, const Point &newPoint) : Shape(shapeName, "2D Shape") {
        this->firstPoint = newPoint;
    }

    void TwoDShape::printInformation() {
        Shape::printInformation();
        std::cout << "First point is " << this->firstPoint << std::endl;
    }
}