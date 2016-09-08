#ifndef DRAWORDERTIMELINE_H
#define DRAWORDERTIMELINE_H

#include "Timeline.h"
#include "DrawOrderKey.h"
#include "SubLoop.h"
#include <QMap>

class DrawOrderTimeline : public Timeline
{
public:
    DrawOrderTimeline();
    QMap<int, DrawOrderKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // DRAWORDERTIMELINE_H
