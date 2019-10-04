#ifndef LAB4_THREEDSHAPE_H
#define LAB4_THREEDSHAPE_H

#include "Shape.h"
#include "Point.h"

namespace Shapes {
    class ThreeDShape : protected Shape {
    protected:
        Point firstPoint;
    public:
        ~ThreeDShape() override = default;;

        ThreeDShape();

        explicit ThreeDShape(const std::string &shapeName, const Point &newPoint);

        virtual double getArea() override = 0;

        virtual double getVolume() = 0;

        virtual void printInformation() override;
    };
}
#endif
