#include "pch.h"
#include "Circle.h"
#include <iostream>


Circle::Circle()
{
    std::cout << "Circle::Circle()\n";
}


Circle::~Circle()
{
    std::cout << "Circle::~Circle()\n";
}

int Circle::area()
{
    std::cout << "Circle::area()";
    return 2 * 3.14*radius;
}