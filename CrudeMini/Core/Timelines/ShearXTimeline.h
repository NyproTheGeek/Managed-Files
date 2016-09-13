#ifndef SHEARXTIMELINE_H
#define SHEARXTIMELINE_H

#include "Timeline.h"
#include "ShearXKey.h"
#include "SubLoop.h"
#include <QMap>

class ShearXTimeline : public Timeline
{
public:
    ShearXTimeline();
    QMap<int, ShearXKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // SHEARXTIMELINE_H
