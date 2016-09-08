#ifndef TRANSLATEYVERTEXKEY_H
#define TRANSLATEYVERTEXKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class TranslateYVertexKey: public Key
{
public:
    TranslateYVertexKey();
    float value;
    CurveGraph curve;
};

#endif // TRANSLATEYVERTEXKEY_H
