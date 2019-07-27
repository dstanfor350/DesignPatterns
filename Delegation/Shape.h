#pragma once
class Shape
{
public:
    Shape();
    virtual ~Shape();

    virtual int area() = 0;
};

