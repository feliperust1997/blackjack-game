#ifndef MYPACK_H
#define MYPACK_H

#endif // MYPACK_H
#include<mycard.h>

class MyPack{

public:

// random generation function for the card suit
int  rand_suit();


// random generation function for the card number
int  rand_card();
//
QString str = QString(":/images/") + QString::number(rand_suit()) + QString(".") + QString::number(rand_card()) + QString(".png");

MyCard * card = new MyCard(QPixmap(str));

};
