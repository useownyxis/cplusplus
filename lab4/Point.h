#ifndef LAB4_POINT_H
#define LAB4_POINT_H

#include <iostream>

namespace Shapes {
    class Point {
    private:
        int x, y, z;
    public:
        ~Point() = default;

        Point();

        explicit Point(int newX, int newY, int newZ);

        Point(const Point &copyPoint);

        Point(Point &&copyPoint);

        Point &operator=(const Point &copyPoint);

        Point &operator=(Point &&copyPoint);

        double getLength(const Point &second);

        friend std::ostream &operator<<(std::ostream &os, const Point &point);

        int getX();

        int getY();

        int getZ();
    };
}
#endif