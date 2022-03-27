#ifndef CTRIANGLE_H
#define CTRIANGLE_H
#include "CPoint2D.h"

class CTriangle
{
private:
    CPoint2D p1;
    CPoint2D p2;
    CPoint2D p3;

public:
    CTriangle();
    CTriangle(CPoint2D p1, CPoint2D p2, CPoint2D p3);
    ~CTriangle();
    void input();
    void output();
    bool checkIsValid();
    float calculatePerimeter();
    float calculateArea();
};
#endif