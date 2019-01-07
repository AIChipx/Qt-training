#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;

    enum ShapeType {Shape1, Shape2, Shape3, Shape4};

    QColor backgroundColor() const{
        return mBackgroundColor;
    }
    void setBackgroundColor(QColor color){
        mBackgroundColor = color;
    }

    ShapeType shape() const{
        return mShape;
    }
    void setShape( ShapeType shape){
        mShape = shape;
    }

protected:
    void paintEvent(QPaintEvent *event);

signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;
};

#endif // RENDERAREA_H
