#pragma once
#include "Shape.h"

class Window
{
public:
    Window();
    Window(Shape *s);
    ~Window();

    int area();

private:
    Shape *w;
};

