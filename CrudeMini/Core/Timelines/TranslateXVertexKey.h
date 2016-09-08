#ifndef TRANSLATEXVERTEXKEY_H
#define TRANSLATEXVERTEXKEY_H

#include "Key.h"
#include "../CurveGraph.h"

class TranslateXVertexKey : public Key
{
public:
    TranslateXVertexKey();
    float value;
    CurveGraph curve;
};

#endif // TRANSLATEXVERTEXKEY_H
