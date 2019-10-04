#ifndef LAB4_PARALLELOGRAM_H
#define LAB4_PARALLELOGRAM_H


#include "TwoDShape.h"

namespace Shapes {
    class Parallelogram : TwoDShape {
    public:
        ~Parallelogram() = default;

        Parallelogram();

        explicit Parallelogram(int firstX, int firstY, int secondX, int secondY, int thirdX, int thirdY);

        explicit Parallelogram(const Point &firstPoint, const Point &secondPoint, const Point &thirdPoint);

        virtual void printInformation() override final;

        virtual double getArea() override final;

    private:
        Point lengthPoint;
        Point widthPoint;
    };
}
#endif
