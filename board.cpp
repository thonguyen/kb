#include "board.h"
#include "column.h"

Board::Board(QWidget *parent)
    : QWidget(parent)
{
    QFrame *frame = new QFrame;
    QHBoxLayout *frameLayout = new QHBoxLayout(frame);
    Column *colum1 = new Column();
    Column *colum2 = new Column();
    //Card *card = new Card("aaaa", this);

    frameLayout->addWidget(colum1);
    frameLayout->addWidget(colum2);
    QColor *color=new QColor(40,240,240);
    QBrush brush;
    brush.setColor(*color);
    QListWidgetItem *cardItem = new QListWidgetItem();
    cardItem->setBackground(brush);
    cardItem->setText("Task 1");
    colum1->addItem(cardItem);
    setLayout(frameLayout);
    setAcceptDrops(true);
}

void Board::addCard(QString s){
    Card *card = new Card(s, this);
    cards.push_back(card);
}

Board::~Board()
{

}
