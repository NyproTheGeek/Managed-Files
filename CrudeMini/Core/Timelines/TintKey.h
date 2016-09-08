#ifndef TINTKEY_H
#define TINTKEY_H

#include "Key.h"
#include "../CurveGraph.h"
#include <array>

class TintKey : public Key
{
public:
    TintKey();
    std::array<float, 4> tint; // spriteName||alpha
    CurveGraph curve;
};

#endif // TINTKEY_H
