#ifndef SHEARYKEY_H
#define SHEARYKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class ShearYKey : public Key
{
public:
    ShearYKey();
    float value;
    CurveGraph curve;
};

#endif // SHEARYKEY_H
