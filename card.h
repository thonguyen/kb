#ifndef CARD_H
#define CARD_H

#include <QLineEdit>

class Card : public QLineEdit
{
Q_OBJECT
public:    
    Card(const QString &text, QWidget *parent);
};

#endif // CARD_H
