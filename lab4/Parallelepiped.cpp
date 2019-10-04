#include "Parallelepiped.h"
#include "Parallelogram.h"

namespace Shapes {
    Parallelepiped::Parallelepiped() : ThreeDShape() {
        this->lengthPoint = this->heightPoint = Point(0, 0, 0);
    }

    Parallelepiped::Parallelepiped(int firstX, int firstY, int firstZ, int secondX, int secondY, int secondZ,
                                   int thirdX, int thirdY, int thirdZ, int fourthX, int fourthY, int fourthZ)
            : ThreeDShape("Parallelepiped", Point(firstX, firstY, firstZ)) {
        this->lengthPoint = Point(secondX, secondY, secondZ);
        this->widthPoint = Point(thirdX, thirdY, thirdZ);
        this->heightPoint = Point(fourthX, fourthY, fourthZ);
    }

    void Parallelepiped::printInformation() {
        ThreeDShape::printInformation();
        std::cout << "Second point is " << this->lengthPoint << std::endl;
        std::cout << "Third point is " << this->widthPoint << std::endl;
        std::cout << "Third point is " << this->heightPoint << std::endl;
        std::cout << "Area is " << this->getArea() << std::endl;
        std::cout << "Volume is " << this->getVolume() << std::endl;
    }

    double Parallelepiped::getArea() {
        return 2.0 * (Parallelogram(this->firstPoint, this->lengthPoint, this->widthPoint).getArea() +
                      Parallelogram(this->firstPoint, this->lengthPoint, this->heightPoint).getArea() +
                      Parallelogram(this->firstPoint, this->widthPoint, this->heightPoint).getArea()
        );
    }

    double Parallelepiped::getVolume() {
        int aX = this->lengthPoint.getX() - this->firstPoint.getX() ;
        int bX = this->widthPoint.getX() - this->firstPoint.getX();
        int cX = this->heightPoint.getX() - this->firstPoint.getX();

        int aY = this->lengthPoint.getY() - this->firstPoint.getY();
        int bY = this->widthPoint.getY() - this->firstPoint.getY();
        int cY = this->heightPoint.getY() - this->firstPoint.getY();

        int aZ = this->lengthPoint.getZ() - this->firstPoint.getZ();
        int bZ = this->widthPoint.getZ() - this->firstPoint.getZ();
        int cZ = this->heightPoint.getZ() - this->firstPoint.getZ();

        return abs(
                aX * (bY * cZ - cY * bZ) -
                aY * (bX * cZ - cX * bZ) +
                aZ * (bX * cY - cX * bY)
        );
    }
}