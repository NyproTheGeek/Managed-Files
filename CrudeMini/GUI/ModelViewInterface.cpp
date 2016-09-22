#include "ModelViewInterface.h"
#include "ui_ModelViewInterface.h"

ModelViewInterface::ModelViewInterface(QWidget *parent):
    Interface(parent), ui(new Ui::ModelViewInterface)
{
    ui->setupUi(this);
}

ModelViewInterface::~ModelViewInterface(){
    delete ui;
}
