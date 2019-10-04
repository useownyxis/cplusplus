#ifndef LAB4_CYLINDER_H
#define LAB4_CYLINDER_H


#include "ThreeDShape.h"

namespace Shapes {
    class Cylinder : ThreeDShape {
    private:
        Point radiusPoint;
        Point heightPoint;
    public:
        ~Cylinder() = default;

        Cylinder();

        explicit Cylinder(int firstX, int firstY, int firstZ, int secondX, int secondY, int secondZ, int thirdX,
                          int thirdY, int thirdZ);

        virtual void printInformation() override final;

        virtual double getArea() override final;

        virtual double getVolume() override final;
    };
}
#endif
