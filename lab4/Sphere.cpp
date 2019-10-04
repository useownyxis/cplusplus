#include <math.h>
#include "Sphere.h"
namespace Shapes {
    Sphere::Sphere() : ThreeDShape() {
        this->radiusPoint = Point(0, 0, 0);
    }

    Sphere::Sphere(int firstX, int firstY, int firstZ, int secondX, int secondY, int secondZ) : ThreeDShape("Sphere",
                                                                                                            Point(firstX,
                                                                                                                  firstY,
                                                                                                                  firstZ)) {
        this->radiusPoint = Point(secondX, secondY, secondZ);
    }

    void Sphere::printInformation() {
        ThreeDShape::printInformation();
        std::cout << "Second point is " << this->radiusPoint << std::endl;
        std::cout << "Area is " << this->getArea() << std::endl;
        std::cout << "Volume is " << this->getVolume() << std::endl;
    }

    double Sphere::getArea() {
        double radius = this->firstPoint.getLength(this->radiusPoint);
        return 4 * M_PI * radius * radius;
    }

    double Sphere::getVolume() {
        double radius = this->firstPoint.getLength(this->radiusPoint);
        return (4.0/3.0) * M_PI * radius * radius * radius;
    }

}