#include "Shape.h"

#include <utility>
namespace Shapes {
    Shape::Shape() {
        this->shapeName = "Unknown name";
        this->type = "Unknown type";
    }

    Shape::Shape(const std::string &newName, const std::string &newType) {
        this->shapeName = newName;
        this->type = newType;
    }

    void Shape::printInformation() {
        std::cout << "Name is " << this->shapeName << std::endl;
        std::cout << "Type is " << this->type << std::endl;
    }
}