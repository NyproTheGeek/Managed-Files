#ifndef TRANSLATEYTIMELINE_H
#define TRANSLATEYTIMELINE_H

#include "Timeline.h"
#include "TranslateYKey.h"
#include "SubLoop.h"
#include <QMap>


class TranslateYTimeline : public Timeline
{
public:
    TranslateYTimeline();
    QMap<int, TranslateYKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // TRANSLATEYTIMELINE_H
