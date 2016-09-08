#ifndef TINTTIMELINE_H
#define TINTTIMELINE_H

#include "Timeline.h"
#include "TintKey.h"
#include "SubLoop.h"
#include <QMap>

class TintTimeline : public Timeline
{
public:
    TintTimeline();
    QMap<int, TintKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // TINTTIMELINE_H
