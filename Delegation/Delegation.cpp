// Delegation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Window.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    std::cout << "=========================================\n";
    std::cout << "     Design Patterns - Delegation\n";
    std::cout << "     Using Polymorphism\n";
    std::cout << "=========================================\n\n";

    Shape *r = new Rectangle(2, 3);
    Shape *c = new Circle(5);
    Window *w = new Window(r);

    int ca = c->area();
    std::cout << "Circle area: " << ca << "\n";
    int ra = r->area();
    std::cout << "Rectangle area: " << ra << "\n";

    delete(r);
    delete(c);
    delete(w);
 }
