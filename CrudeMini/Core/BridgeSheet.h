#ifndef BRIDGESHEET_H
#define BRIDGESHEET_H

#include "Timelines/Timeline.h"
#include "CurveGraph.h"
#include <QHash>
#include <QList>
#include <QString>
#include <memory>

class BridgeSheet
{
public:
    BridgeSheet();
    QString attachedAnimName;
    QHash<std::shared_ptr<Timeline>, CurveGraph> curves; // no cyclic ref here
    // mut curves =: Hash<ref Timeline, own CurveGraph>
};

#endif // BRIDGESHEET_H
