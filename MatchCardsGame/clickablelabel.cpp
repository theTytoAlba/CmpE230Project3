#include "clickablelabel.h"

ClickableLabel::ClickableLabel(const QPixmap &pix, QWidget *parent)
    : QLabel(parent)
{
    QLabel::setPixmap(pix);
    QLabel::setScaledContents(true);
}

ClickableLabel::~ClickableLabel()
{
}

void ClickableLabel::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}
