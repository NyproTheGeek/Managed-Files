#ifndef SHEARYTIMELINE_H
#define SHEARYTIMELINE_H

#include "Timeline.h"
#include "ShearYKey.h"
#include "SubLoop.h"
#include <QMap>

class ShearYTimeline : public Timeline
{
public:
    ShearYTimeline();
    QMap<int, ShearYKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // SHEARYTIMELINE_H
