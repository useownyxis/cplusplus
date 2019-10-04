#include <cmath>
#include "Point.h"

namespace Shapes {

    Point::Point() {
        this->x = this->y = this->z = 0;
    }

    Point::Point(int newX, int newY, int newZ) {
        this->x = newX;
        this->y = newY;
        this->z = newZ;
    }

    double Point::getLength(const Point &second) {
        return sqrt(pow(1.0 * this->x - second.x, 2.0) + pow(1.0 * this->y - second.y, 2.0) +
                    pow(1.0 * this->z - second.z, 2.0));
    }

    Point &Point::operator=(const Point &copyPoint) {
        if (this == &copyPoint) {
            return *this;
        }
        this->x = copyPoint.x;
        this->y = copyPoint.y;
        this->z = copyPoint.z;
        return *this;
    }

    Point::Point(const Point &copyPoint) {
        this->x = copyPoint.x;
        this->y = copyPoint.y;
        this->z = copyPoint.z;
    }

    Point &Point::operator=(Point &&copyPoint) {
        if (this == &copyPoint) {
            return *this;
        }
        this->x = copyPoint.x;
        this->y = copyPoint.y;
        this->z = copyPoint.z;
        return *this;
    }

    Point::Point(Point &&copyPoint) {
        this->x = copyPoint.x;
        this->y = copyPoint.y;
        this->z = copyPoint.z;
    }

    std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << "(" << point.x << "," << point.y << "," << point.z << ")";
        return os;
    }

    int Point::getX() {
        return this->x;
    }

    int Point::getY() {
        return this->y;
    }

    int Point::getZ() {
        return this->z;
    }


}