#ifndef MYSCENE_H
#define MYSCENE_H

#endif // MYSCENE_H
#define Q_OBJECT
#include<QGraphicsScene>

class MyScene:public QGraphicsScene{
Q_OBJECT
public slots:
    void draw();
};
