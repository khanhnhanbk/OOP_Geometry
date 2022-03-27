#ifndef CSQUARE_H
#define CSQUARE_H

#include "CPoint2D.h"
#include "CRectangle.h"

class CSquare : public CRectangle
{
private:
public:
    bool checkIsValid();
};

#endif