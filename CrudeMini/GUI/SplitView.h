#ifndef SPLITTERVIEW_H
#define SPLITTERVIEW_H

#include <QSplitter>
#include <QWidget>

class SplitView : public QSplitter
{
    Q_OBJECT
public:
    explicit SplitView(QWidget *parent = nullptr);
    explicit SplitView(Qt::Orientation orientation, QWidget *parent = nullptr);
};

#endif // SPLITTERVIEW_H
