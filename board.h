#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QGridLayout>
#include <QFrame>

#include <card.h>

class Board : public QWidget
{
    Q_OBJECT

public:
    Board(QWidget *parent = 0);
    ~Board();

private:
    void addCard(QString s);

    QGridLayout *mainLayout;
    QList<Card *> cards;
};

#endif // BOARD_H
