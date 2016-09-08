#ifndef SCALEYTIMELINE_H
#define SCALEYTIMELINE_H

#include "Timeline.h"
#include "ScaleYKey.h"
#include "SubLoop.h"
#include <QMap>

class ScaleYTimeline : public Timeline
{
public:
    ScaleYTimeline();
    QMap<int, ScaleYKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // SCALEYTIMELINE_H
