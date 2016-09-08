#ifndef ANIMATION_H
#define ANIMATION_H

#include "Timelines/Timeline.h"
#include "CurveGraph.h"
#include <QMap>
#include <QList>
#include <QString>
#include <memory>

class Animation
{
public:
    Animation();
    QString name;
    QMap<int, QList<std::shared_ptr<Timeline>>> frames;
    // mut frames =: Map<Int, List<own Timeline>>
};

#endif // ANIMATION_H
