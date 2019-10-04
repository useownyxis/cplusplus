#ifndef LAB4_TWODSHAPE_H
#define LAB4_TWODSHAPE_H

#include "Shape.h"
#include "Point.h"

namespace Shapes {
    class TwoDShape : protected Shape {
    protected:
        Point firstPoint;
    public:
        ~TwoDShape() override = default;;

        TwoDShape();

        explicit TwoDShape(const std::string &shapeName, const Point &newPoint);

        virtual double getArea() override = 0;

        virtual void printInformation() override;
    };
}

#endif
