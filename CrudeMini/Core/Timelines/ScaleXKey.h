#ifndef SCALEXKEY_H
#define SCALEXKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class ScaleXKey : public Key
{
public:
    ScaleXKey();
    float value;
    CurveGraph curve;
};

#endif // SCALEXKEY_H
