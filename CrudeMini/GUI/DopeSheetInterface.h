#ifndef DOPESHEETINTERFACE_H
#define DOPESHEETINTERFACE_H

#include "Interface.h"

namespace Ui {
class DopeSheetInterface;
}

class DopeSheetInterface : public Interface
{
    Q_OBJECT
public:
    explicit DopeSheetInterface(QWidget *parent = nullptr);
    ~DopeSheetInterface();

private:
    Ui::DopeSheetInterface *ui;
};

#endif // DOPESHEETINTERFACE_H
