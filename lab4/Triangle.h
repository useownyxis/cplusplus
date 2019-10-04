#ifndef LAB4_TRIANGLE_H
#define LAB4_TRIANGLE_H


#include "TwoDShape.h"

namespace Shapes {
    class Triangle : protected TwoDShape {
    public:
        ~Triangle() = default;

        Triangle();

        explicit Triangle(int firstX, int firstY, int secondX, int secondY, int thirdX, int thirdY);

        virtual void printInformation() override final;

        virtual double getArea() override final;

    private:
        Point secondPoint;
        Point thirdPoint;
    };
}
#endif
