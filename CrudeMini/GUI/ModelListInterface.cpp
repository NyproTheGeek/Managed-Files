#include "ModelListInterface.h"
#include "ui_ModelListInterface.h"

ModelListInterface::ModelListInterface(QWidget *parent):
    Interface(parent), ui(new Ui::ModelListInterface)
{
    ui->setupUi(this);
}

ModelListInterface::~ModelListInterface(){
    delete ui;
}
