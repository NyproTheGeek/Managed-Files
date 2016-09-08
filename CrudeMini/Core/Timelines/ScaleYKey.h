#ifndef SCALEYKEY_H
#define SCALEYKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class ScaleYKey : public Key
{
public:
    ScaleYKey();
    float value;
    CurveGraph curve;
};

#endif // SCALEYKEY_H
