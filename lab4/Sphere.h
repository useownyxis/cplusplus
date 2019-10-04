#ifndef LAB4_SPHERE_H
#define LAB4_SPHERE_H


#include "ThreeDShape.h"
namespace Shapes {
    class Sphere : ThreeDShape {
    private:
        Point radiusPoint;
    public:
        ~Sphere() = default;

        Sphere();

        explicit Sphere(int firstX, int firstY, int firstZ, int secondX, int secondY, int secondZ);

        virtual void printInformation() override final;

        virtual double getArea() override final;

        virtual double getVolume() override final;
    };
}

#endif //LAB4_SPHERE_H
