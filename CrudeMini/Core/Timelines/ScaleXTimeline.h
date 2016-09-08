#ifndef SCALEXTIMELINE_H
#define SCALEXTIMELINE_H

#include "Timeline.h"
#include "ScaleXKey.h"
#include "SubLoop.h"
#include <QMap>

class ScaleXTimeline : public Timeline
{
public:
    ScaleXTimeline();
    QMap<int, ScaleXKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // SCALEXTIMELINE_H
