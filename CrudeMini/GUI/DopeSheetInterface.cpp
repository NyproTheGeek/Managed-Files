#include "DopeSheetInterface.h"
#include "ui_DopeSheetInterface.h"

DopeSheetInterface::DopeSheetInterface(QWidget *parent):
    Interface(parent), ui(new Ui::DopeSheetInterface)
{
    ui->setupUi(this);
}

DopeSheetInterface::~DopeSheetInterface(){
    delete ui;
}
