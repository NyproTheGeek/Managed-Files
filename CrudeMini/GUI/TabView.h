#ifndef TAB_H
#define TAB_H

#include "SplitView.h"
#include <QTabWidget>
#include <memory>

class TabView : public QTabWidget
{
    Q_OBJECT
public:
    explicit TabView(QWidget *parent = nullptr);
};

#endif // TAB_H
