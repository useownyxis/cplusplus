#include "ThreeDShape.h"

namespace Shapes {
    ThreeDShape::ThreeDShape() : Shape() {
        this->firstPoint = Point(0, 0, 0);
    }

    ThreeDShape::ThreeDShape(const std::string &shapeName, const Point &newPoint) : Shape(shapeName, "3D Shape") {
        this->firstPoint = newPoint;
    }

    void ThreeDShape::printInformation() {
        Shape::printInformation();
        std::cout << "First point is " << this->firstPoint << std::endl;
    }
}