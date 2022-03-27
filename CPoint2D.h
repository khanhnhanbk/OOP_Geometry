#ifndef CPOINT2D_H
#define CPOINT2D_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

class CPoint2D
{
private:
    float x, y;

public:
    CPoint2D();
    CPoint2D(float, float);
    ~CPoint2D();
    float getX();
    float getY();
    void setX(float);
    void setY(float);
    void input();
    void output();
    float calculateDistance(CPoint2D);
};

#endif // ! CPOINT2D_h