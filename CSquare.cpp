#include "CSquare.h"

bool CSquare::checkIsValid()
{
    // Check if the square ABCD is valid
    float AB = p1.calculateDistance(p2);
    float BC = p2.calculateDistance(p3);
    float CD = p3.calculateDistance(p4);
    float DA = p4.calculateDistance(p1);
    if (AB == BC && BC == CD && CD == DA)
    {
        float AC = p1.calculateDistance(p3);
        float BD = p2.calculateDistance(p4);
        if (AC == BD)
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        return false;
    }
}