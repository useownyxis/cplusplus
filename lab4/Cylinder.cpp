#include <math.h>
#include "Cylinder.h"


namespace Shapes {
    Cylinder::Cylinder() : ThreeDShape() {
        this->radiusPoint = this->heightPoint = Point(0, 0, 0);
    }

    Cylinder::Cylinder(int firstX, int firstY, int firstZ, int secondX, int secondY, int secondZ, int thirdX,
                       int thirdY, int thirdZ) : ThreeDShape("Cylinder", Point(firstX, firstY, firstZ)) {
        this->radiusPoint = Point(secondX, secondY, secondZ);
        this->heightPoint = Point(thirdX, thirdY, thirdZ);
    }

    void Cylinder::printInformation() {
        ThreeDShape::printInformation();
        std::cout << "Second point is " << this->radiusPoint << std::endl;
        std::cout << "Third point is " << this->heightPoint << std::endl;
        std::cout << "Area is " << this->getArea() << std::endl;
        std::cout << "Volume is " << this->getVolume() << std::endl;
    }

    double Cylinder::getArea() {
        double radius = this->firstPoint.getLength(radiusPoint);
        double height = this->firstPoint.getLength(heightPoint);
        return 2.0 * M_PI * radius * (radius + height);
    }

    double Cylinder::getVolume() {
        double radius = this->firstPoint.getLength(radiusPoint);
        double height = this->firstPoint.getLength(heightPoint);
        return M_PI * radius * radius * height;
    }
}