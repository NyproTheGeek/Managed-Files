#ifndef SCENEVIEWINTERFACE_H
#define SCENEVIEWINTERFACE_H

#include "Interface.h"

namespace Ui{
class SceneViewInterface;
}

class SceneViewInterface : public Interface
{
    Q_OBJECT
public:
    explicit SceneViewInterface(QWidget *parent = nullptr);
    ~SceneViewInterface();
private:
    Ui::SceneViewInterface *ui;
};

#endif // SCENEVIEWINTERFACE_H
