#include "pch.h"
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
    std::cout << "Rectangle::Rectangle()\n";
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle::~Rectangle()\n";
}

int Rectangle::area()
{
    std::cout << "Rectangle::area()";
    return width * height;
}
