#include "pch.h"
#include <iostream>
#include "Window.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"


Window::Window()
{
}

Window::Window(Shape *s)
    : w(s)
{
    std::cout << "Window::Window()\n";
}

Window::~Window()
{
    std::cout << "Window::~Window()\n";
}

int Window::area()
{
    return w->area();
}
