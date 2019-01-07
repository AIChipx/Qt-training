#include "renderarea.h"
#include <QPainter>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0, 0, 255),
    mShapeColor(255, 255, 255),
    mShape(Shape1)
{

}

QSize RenderArea::minimumSizeHint() const{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);


    switch(mShape){
    case Shape1:
        mBackgroundColor = Qt::red;
        break;
    case Shape2:
        mBackgroundColor = Qt::green;
        break;
    case Shape3:
        mBackgroundColor = Qt::blue;
        break;
    case Shape4:
        mBackgroundColor = Qt::yellow;
        break;
    default:
        break;
    }

    painter.setBrush(mBackgroundColor);
    painter.setPen(mShapeColor);

    //drawing area
    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
}

