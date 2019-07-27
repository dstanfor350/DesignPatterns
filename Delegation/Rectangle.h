#pragma once
#include "Shape.h"

class Rectangle :
    public Shape
{
private:
    int width;
    int height;

public:
    Rectangle();
    Rectangle(int w, int h)
        : width(w), height(h)
    {}
    ~Rectangle();

    int area();
};

