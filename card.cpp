#include "card.h"

Card::Card(const QString &text, QWidget *parent) : QLineEdit(text, parent)
{
    setAutoFillBackground(true);
}
