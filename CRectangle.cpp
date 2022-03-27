#include "CRectangle.h"

CRectangle::CRectangle()
{
    p1.setX(0);
    p1.setY(0);
    p2.setX(0);
    p2.setY(0);
    p3.setX(0);
    p3.setY(0);
    p4.setX(0);
    p4.setY(0);
}
CRectangle::CRectangle(CPoint2D p1, CPoint2D p2, CPoint2D p3, CPoint2D p4)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    this->p4 = p4;
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
CRectangle::~CRectangle()
{
}
void CRectangle::input()
{
    cout << "Enter p1: \n";
    p1.input();
    cout << "Enter p2:  \n";
    p2.input();
    cout << "Enter p3:  \n";
    p3.input();
    cout << "Enter p4:  \n";
    p4.input();
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
void CRectangle::output()
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
    cout << "p4: ";
    p4.output();
    cout << endl;
}
float CRectangle::calculateArea()
{
    return p1.calculateDistance(p2) * p1.calculateDistance(p4);
}
float CRectangle::calculatePerimeter()
{
    return 2 * (p1.calculateDistance(p2) + p1.calculateDistance(p4));
}
bool CRectangle::checkIsValid()
{
    // Rectangle is a parallelogram with two diagonals of equal length
    //  check is p1 p2 p3 p4 is a rectangle ABCD
    float AB = p1.calculateDistance(p2);
    float BC = p2.calculateDistance(p3);
    float CD = p3.calculateDistance(p4);
    float DA = p4.calculateDistance(p1);
    if (AB != CD)
        return false;
    if (DA != BC)
        return false;
    float AC = p1.calculateDistance(p3);
    float BD = p2.calculateDistance(p4);
    if (AC != BD)
        return false;
    return true;
}