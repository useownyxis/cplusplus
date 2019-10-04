#ifndef LAB4_SHAPE_H
#define LAB4_SHAPE_H

#include <iostream>

namespace Shapes {
    class Shape {
    protected:
        std::string type;
        std::string shapeName;
    public:
        virtual ~Shape() = default;

        Shape();

        explicit Shape(const std::string &newName, const std::string &newType);

        virtual void printInformation();

        virtual double getArea() = 0;
    };
}
#endif
