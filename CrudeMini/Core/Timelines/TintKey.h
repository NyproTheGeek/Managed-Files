#ifndef TINTKEY_H
#define TINTKEY_H

#include "../CurveGraph.h"

class TintKey
{
public:
    TintKey();
    float tint [4]; // spriteName||alpha
    CurveGraph curve;
};

#endif // TINTKEY_H
