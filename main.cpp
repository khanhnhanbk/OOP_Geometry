#include "CRectangle.h"
#include "CSquare.h"
#include "CTriangle.h"
int main()
{
    cout << "input triangle" << endl;
    CTriangle t;
    t.input();
    t.output();
    cout << "Area: " << t.calculateArea() << endl;
    cout << "Perimeter: " << t.calculatePerimeter() << endl;

    cout << "input rectangle: " << endl;

    CRectangle r1;
    r1.input();
    r1.output();
    cout << "Area: " << r1.calculateArea() << endl;
    cout << "Perimeter: " << r1.calculatePerimeter() << endl;

    cout << "input square: " << endl;
    CSquare s1;
    s1.input();
    s1.output();
    cout << "Area: " << s1.calculateArea() << endl;
    cout << "Perimeter: " << s1.calculatePerimeter() << endl;

    return 0;
}