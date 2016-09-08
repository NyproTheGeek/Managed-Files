#ifndef SKIN_H
#define SKIN_H

#include "SpriteSlot.h"
#include <QString>

class Skin
{
public:
    Skin();
    QString name;
    QList<QString, SpriteSlot> settings; // boneName||spriteSlot
};

#endif // SKIN_H
