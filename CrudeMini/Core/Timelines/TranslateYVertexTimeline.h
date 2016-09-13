#ifndef TRANSLATEYVERTEXTIMELINE_H
#define TRANSLATEYVERTEXTIMELINE_H

#include "Timeline.h"
#include "TranslateYVertexKey.h"
#include "SubLoop.h"
#include <QMap>

class TranslateYVertexTimeline : public Timeline
{
public:
    TranslateYVertexTimeline();
    QMap<int, TranslateYVertexKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // TRANSLATEYVERTEXTIMELINE_H
