#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H

#include "TwoDShape.h"

namespace Shapes {

    class Circle : protected TwoDShape {
    public:
        ~Circle() = default;

        Circle();

        explicit Circle(int firstX, int firstY, int secondX, int secondY);

        virtual void printInformation() override final;

        virtual double getArea() override final;

    private:
        Point radiusPoint;
    };

}
#endif
