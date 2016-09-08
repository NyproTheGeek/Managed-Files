#ifndef TRANSLATEYKEY_H
#define TRANSLATEYKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class TranslateYKey : public Key
{
public:
    TranslateYKey();
    float value;
    CurveGraph curve;
};

#endif // TRANSLATEYKEY_H
