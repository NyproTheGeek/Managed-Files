#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "DopeSheetInterface.h"
#include "ModelListInterface.h"
#include "ModelViewInterface.h"
#include "SceneViewInterface.h"
#include <QTabWidget>
#include <QHBoxLayout>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::testUI(){
    splitView = new SplitView(Qt::Horizontal);
    QHBoxLayout *hLay = new QHBoxLayout(ui->centralWidget);
    hLay->addWidget(splitView);

    TabView *tab1 = new TabView;
    TabView *tab2 = new TabView;
    TabView *tab3 = new TabView;
    TabView *tab4 = new TabView;

    DopeSheetInterface *dsi = new DopeSheetInterface;
    ModelListInterface *mli = new ModelListInterface;
    ModelViewInterface *mvi = new ModelViewInterface;
    SceneViewInterface *svi = new SceneViewInterface;

    tab1->addTab(dsi, "DopeSheet");
    tab2->addTab(mli, "ModelList");
    tab3->addTab(mvi, "ModelView");
    tab4->addTab(svi, "SceneView");

    SplitView *split1 = new SplitView(Qt::Vertical);
    SplitView *split2 = new SplitView(Qt::Vertical);

    split1->addWidget(tab4);
    split1->addWidget(tab1);

    split2->addWidget(tab3);
    split2->addWidget(tab2);

    splitView->addWidget(split1);
    splitView->addWidget(split2);
}
