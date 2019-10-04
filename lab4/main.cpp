#include <iostream>
#include "Parallelogram.h"
#include "Circle.h"
#include "Triangle.h"
#include "Sphere.h"
#include "Parallelepiped.h"
#include "Cylinder.h"

int main()
{
    Shapes::Parallelogram first(2,4,4,8,7,5);
    first.printInformation();
    Shapes::Circle second(7,5,10,10);
    second.printInformation();
    Shapes::Triangle third(5,5,10,7,8,11);
    third.printInformation();
    Shapes::Sphere fourth(7,5,6,10,11,12);
    fourth.printInformation();
    Shapes::Parallelepiped fifth(6,7,4,5,4,5,8,8,5,3,10,2);
    fifth.printInformation();
    Shapes::Cylinder sixth(6,5,7,6,6,6,4,8,5);
    sixth.printInformation();
}