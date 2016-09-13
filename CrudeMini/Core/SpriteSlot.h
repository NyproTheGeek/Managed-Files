#ifndef SPRITESLOT_H
#define SPRITESLOT_H

#include "Sprite.h"
#include <QMap>
#include <string>
#include <array>

class SpriteSlot
{
public:
    SpriteSlot();
    QMap<std::string, Sprite> sprites;
    std::array<float, 2> shear;
    std::array<float, 2> scale;
    float angle;
    std::array<float, 2> pos;
    std::array<float, 4> tint;
};

#endif // SPRITESLOT_H
