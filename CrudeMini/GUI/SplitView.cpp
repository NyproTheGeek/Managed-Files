#include "SplitView.h"

SplitView::SplitView(QWidget *parent):
    QSplitter(parent)
{

}

SplitView::SplitView(Qt::Orientation orientation, QWidget *parent):
    QSplitter(orientation, parent)
{

}
