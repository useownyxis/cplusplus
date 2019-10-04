#include <cmath>
#include "Triangle.h"

namespace Shapes {
    Triangle::Triangle() : TwoDShape() {
        this->secondPoint = this->thirdPoint = Point(0, 0, 0);
    }

    Triangle::Triangle(int firstX, int firstY, int secondX, int secondY, int thirdX, int thirdY) : TwoDShape("Triangle",
                                                                                                             Point(firstX,
                                                                                                                   firstY,
                                                                                                                   0)) {
        this->secondPoint = Point(secondX, secondY, 0);
        this->thirdPoint = Point(thirdX, thirdY, 0);
    }

    void Triangle::printInformation() {
        TwoDShape::printInformation();
        std::cout << "Second point is " << this->secondPoint << std::endl;
        std::cout << "Third point is " << this->thirdPoint << std::endl;
        std::cout << "Area is " << this->getArea() << std::endl;
    }

    double Triangle::getArea() {
        double firstSide = this->firstPoint.getLength(this->secondPoint);
        double secondSide = this->firstPoint.getLength(this->thirdPoint);
        double thirdSide = this->secondPoint.getLength(this->thirdPoint);
        double halfPerimeter = (firstSide + secondSide + thirdSide) / 2;
        return sqrt(halfPerimeter * (halfPerimeter - firstSide) * (halfPerimeter - secondSide) *
                    (halfPerimeter - thirdSide));
    }
}