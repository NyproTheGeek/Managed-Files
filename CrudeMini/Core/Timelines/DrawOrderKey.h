#ifndef DRAWORDERKEY_H
#define DRAWORDERKEY_H

#include "Key.h"

class DrawOrderKey : public Key
{
public:
    DrawOrderKey();
    int boneOrderIndex; // number of steps backward
};

#endif // DRAWORDERKEY_H
