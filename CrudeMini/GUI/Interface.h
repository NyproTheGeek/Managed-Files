#ifndef INTERFACE_H
#define INTERFACE_H

#include "TabView.h"
#include <QWidget>

class Interface : public QWidget
{
    Q_OBJECT
public:
    explicit Interface(QWidget *parent = nullptr);
};

#endif // INTERFACE_H
