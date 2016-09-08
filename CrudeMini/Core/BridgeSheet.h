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
    QHash<std::weak_ptr<Timeline>, CurveGraph> curves;
    // mut curves =: Hash<ref Timeline, own CurveGraph>
};

#endif // BRIDGESHEET_H
