#include "Parallelogram.h"

namespace Shapes {
    Parallelogram::Parallelogram() : TwoDShape() {
        this->lengthPoint = this->widthPoint = Point(0, 0, 0);
    }

    Parallelogram::Parallelogram(int firstX, int firstY, int secondX, int secondY, int thirdX, int thirdY) : TwoDShape(
            "Parallelogram", Point(firstX, firstY, 0)) {
        this->lengthPoint = Point(secondX, secondY, 0);
        this->widthPoint = Point(thirdX, thirdY, 0);
    }

    void Parallelogram::printInformation() {
        TwoDShape::printInformation();
        std::cout << "Second point is " << this->lengthPoint << std::endl;
        std::cout << "Third point is " << this->widthPoint << std::endl;
        std::cout << "Area is " << this->getArea() << std::endl;
    }

    double Parallelogram::getArea() {
        int aX = abs(this->firstPoint.getX() - this->lengthPoint.getX());
        int aY = abs(this->firstPoint.getY() - this->lengthPoint.getY());
        int bX = abs(this->firstPoint.getX() - this->widthPoint.getX());
        int bY = abs(this->firstPoint.getY() - this->widthPoint.getY());
        return 1.0 * abs(aX * bY - aY * bX);
    }

    Parallelogram::Parallelogram(const Point &firstPoint, const Point &secondPoint, const Point &thirdPoint)
            : TwoDShape("Parallelogram", firstPoint) {
        this->lengthPoint = secondPoint;
        this->widthPoint = thirdPoint;
    }
}