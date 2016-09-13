#ifndef SHEARXKEY_H
#define SHEARXKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class ShearXKey : public Key
{
public:
    ShearXKey();
    float value;
    CurveGraph curve;
};

#endif // SHEARXKEY_H
