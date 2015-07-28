#ifndef COLUMN_H
#define COLUMN_H

#include <QListWidget>

class Column : public QListWidget
{
    Q_OBJECT
public:
    explicit Column(QListWidget *parent = 0);

signals:

public slots:
};

#endif // COLUMN_H
