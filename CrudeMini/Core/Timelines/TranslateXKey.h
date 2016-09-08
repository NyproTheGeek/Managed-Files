#ifndef TRANSLATEXKEY_H
#define TRANSLATEXKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class TranslateXKey : public Key
{
public:
    TranslateXKey();
    float value;
    CurveGraph curve;
};

#endif // TRANSLATEXKEY_H
