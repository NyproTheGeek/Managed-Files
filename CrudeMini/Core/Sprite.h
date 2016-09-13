#ifndef SPRITE_H
#define SPRITE_H

#include "Mesh.h"
#include <string>
#include <array>
#include <memory>


class Sprite
{
public:
    Sprite();
    std::string image;
    std::shared_ptr<Mesh> mesh;
    std::array<float, 2> shear;
    std::array<float, 2> scale;
    float angle;
    std::array<float, 2> pos;
    std::array<float, 4> rgba;
};

#endif // SPRITE_H
