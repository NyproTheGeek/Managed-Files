#ifndef SUBLOOP_H
#define SUBLOOP_H

#include "../CurveGraph.h"

class SubLoop
{
public:
    SubLoop();
    bool isProgressive;
    int loopTimes, loopCount, backTrack;
    CurveGraph curve;
};

#endif // SUBLOOP_H
