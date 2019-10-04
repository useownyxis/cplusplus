#ifndef LAB4_PARALLELEPIPED_H
#define LAB4_PARALLELEPIPED_H


#include "ThreeDShape.h"


namespace Shapes {
    class Parallelepiped : ThreeDShape {
    private:
        Point lengthPoint;
        Point widthPoint;
        Point heightPoint;
    public:
        ~Parallelepiped() = default;

        Parallelepiped();

        explicit Parallelepiped(int firstX, int firstY, int firstZ, int secondX, int secondY, int secondZ, int thirdX,
                                int thirdY, int thirdZ, int fourthX, int fourthY, int fourthZ);

        virtual void printInformation() override final;

        virtual double getArea() override final;

        virtual double getVolume() override final;

    };
}
#endif //LAB4_PARALLELEPIPED_H
