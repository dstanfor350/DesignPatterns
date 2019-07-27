#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    int radius;

public:
    Circle();
    Circle(int r)
        : radius(r)
    {}

    ~Circle();

    int area();
};

