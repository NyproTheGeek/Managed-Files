#ifndef ROTATEKEY_H
#define ROTATEKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class RotateKey : public Key
{
public:
    RotateKey();
    float value;
    CurveGraph curve;
};

#endif // ROTATEKEY_H
