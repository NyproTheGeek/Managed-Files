#ifndef SWAPKEY_H
#define SWAPKEY_H

#include "Key.h"
#include "../CurveGraph.h"
#include <QHash>
#include <QString>

class SwapKey : public Key
{
public:
    SwapKey();
    QHash<QString, int> visibleSprites; // spriteName||alpha
    CurveGraph curve;

};

#endif // SWAPKEY_H
