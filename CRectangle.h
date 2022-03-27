#ifndef CRECTANGLE_H
#define CRECTANGLE_H
#include "CPoint2D.h"

class CRectangle
{
protected:
    CPoint2D p1, p2, p3, p4;

public:
  
    CRectangle();
    CRectangle(CPoint2D, CPoint2D, CPoint2D, CPoint2D);
    ~CRectangle();
    void input();
    void output();
    float calculateArea();
    float calculatePerimeter();
    bool checkIsValid();
};
#endif