#ifndef TRANSLATEXTIMELINE_H
#define TRANSLATEXTIMELINE_H

#include "Timeline.h"
#include "TranslateXKey.h"
#include "SubLoop.h"
#include <QMap>

class TranslateXTimeline : public Timeline
{
public:
    TranslateXTimeline();
    QMap<int, TranslateXKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // TRANSLATEXTIMELINE_H
