#ifndef MODELLISTINTERFACE_H
#define MODELLISTINTERFACE_H

#include "Interface.h"

namespace Ui{
class ModelListInterface;
}

class ModelListInterface : public Interface
{
    Q_OBJECT
public:
    explicit ModelListInterface(QWidget *parent = nullptr);
    ~ModelListInterface();
private:
    Ui::ModelListInterface *ui;
};

#endif // MODELLISTINTERFACE_H
