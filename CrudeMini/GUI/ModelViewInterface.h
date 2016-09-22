#ifndef MODELVIEWINTERFACE_H
#define MODELVIEWINTERFACE_H

#include "Interface.h"

namespace Ui{
class ModelViewInterface;
}

class ModelViewInterface : public Interface
{
    Q_OBJECT
public:
    explicit ModelViewInterface(QWidget *parent = nullptr);
    ~ModelViewInterface();
private:
    Ui::ModelViewInterface *ui;
};

#endif // MODELVIEWINTERFACE_H
