#ifndef TRANSLATEXVERTEXTIMELINE_H
#define TRANSLATEXVERTEXTIMELINE_H

#include "Timeline.h"
#include "TranslateXVertexKey.h"
#include "SubLoop.h"
#include <QMap>

class TranslateXVertexTimeline : public Timeline
{
public:
    TranslateXVertexTimeline();
    QMap<int, TranslateXVertexKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // TRANSLATEXVERTEXTIMELINE_H
