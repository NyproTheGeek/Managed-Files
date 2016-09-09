#ifndef SKIN_H
#define SKIN_H

#include "SpriteSlot.h"
#include <QMap>
#include <QString>

class Skin
{
public:
    Skin();
    QString name;
    QMap<QString, SpriteSlot> settings; // boneName||spriteSlot
};

#endif // SKIN_H
