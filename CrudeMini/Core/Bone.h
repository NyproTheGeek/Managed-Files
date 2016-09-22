#ifndef BONE_H
#define BONE_H

#include "Skeleton.h"
#include "SpriteSlot.h"
#include <QList>
#include <string>
#include <memory>
#include <array>
#include <bitset>

class Bone
{
public:
    Bone();
    std::string name;
    std::weak_ptr<Skeleton> skel; // cyclic ref here with Skeleton
    int drawOrder;
    QList<std::weak_ptr<Bone>> children;
    std::weak_ptr<Bone> baseParent;
    std::weak_ptr<Bone> tipParent;
    SpriteSlot spriteSlot;
    float angle;
    std::array<float, 2> pos;
    float length;
    std::bitset<8> propertyFlags;
};

#endif // BONE_H
