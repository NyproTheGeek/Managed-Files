#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "DopeSheetData.h"
#include "ModelListData.h"
#include "ModelViewData.h"
#include "SceneViewData.h"
#include "SplitView.h"
#include <QMainWindow>
#include <QList>
#include <QPair>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    SplitView *splitView;
    DopeSheetData dopeSheetData;
    ModelListData modelListData;
    ModelViewData modelViewData;
    SceneViewData sceneViewData;

    void testUI();
};

#endif // MAINWINDOW_H
