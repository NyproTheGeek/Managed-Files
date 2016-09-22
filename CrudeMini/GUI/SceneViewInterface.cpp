#include "SceneViewInterface.h"
#include "ui_SceneViewInterface.h"

SceneViewInterface::SceneViewInterface(QWidget *parent):
    Interface(parent), ui(new Ui::SceneViewInterface)
{
    ui->setupUi(this);
}


SceneViewInterface::~SceneViewInterface(){
    delete ui;
}
