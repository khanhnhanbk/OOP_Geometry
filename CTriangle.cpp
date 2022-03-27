#include "CTriangle.h"

CTriangle::CTriangle()
{
    p1.setX(0);
    p1.setY(0);
    p2.setX(0);
    p2.setY(0);
    p3.setX(0);
    p3.setY(0);
}
CTriangle::CTriangle(CPoint2D p1, CPoint2D p2, CPoint2D p3)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    if (this->checkIsValid())
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
        throw "Invalid";
    }
}
CTriangle::~CTriangle()
{
}
void CTriangle::input()
{
    cout << "Enter p1: \n";
    p1.input();
    cout << "Enter p2:  \n";
    p2.input();
    cout << "Enter p3:  \n";
    p3.input();
    if (this->checkIsValid())
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
        throw "Invalid";
    }
}
void CTriangle::output()
{
    cout << "Output" << endl;
    cout << "p1: ";
    p1.output();
    cout << endl;
    cout << "p2: ";
    p2.output();
    cout << endl;
    cout << "p3: ";
    p3.output();
    cout << endl;
}
bool CTriangle::checkIsValid()
{
    // Check if the triangle ABC is valid
    float d1 = p1.calculateDistance(p2);
    float d2 = p2.calculateDistance(p3);
    float d3 = p3.calculateDistance(p1);

    if (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1)
    {
        return 0;
    }
    return 1;
}
float CTriangle::calculatePerimeter()
{
    return p1.calculateDistance(p2) + p1.calculateDistance(p3) + p2.calculateDistance(p3);
}

float CTriangle::calculateArea()
{
    float s = this->calculatePerimeter() / 2;
    return sqrt(s * (s - p1.calculateDistance(p2)) * (s - p1.calculateDistance(p3)) * (s - p2.calculateDistance(p3)));
}