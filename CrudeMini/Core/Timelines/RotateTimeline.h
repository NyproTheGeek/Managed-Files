#ifndef ROTATETIMELINE_H
#define ROTATETIMELINE_H

#include "Timeline.h"
#include "RotateKey.h"
#include "SubLoop.h"
#include <QMap>

class RotateTimeline : public Timeline
{
public:
    RotateTimeline();
    QMap<int, RotateKey> frames;
    QMap<int, SubLoop> subLoops;
};

#endif // ROTATETIMELINE_H
