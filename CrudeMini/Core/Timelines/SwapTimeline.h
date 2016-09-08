#ifndef SWAPTIMELINE_H
#define SWAPTIMELINE_H

#include "Timeline.h"
#include "SwapKey.h"
#include "SubLoop.h"
#include <QMap>

class SwapTimeline : public Timeline
{
public:
    SwapTimeline();
    QMap<int, SwapKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // SWAPTIMELINE_H
