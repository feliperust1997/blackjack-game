#include <myscene.h>
#include <QApplication>
#include <QgraphicsView>
#include <mybutton.h>
#include <mycard.h>
#include <QMainWindow>
#include <mypack.h>
#include <time.h>
#include <iostream>
#include<QObject>


using namespace std;


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);



    //initialize random seed
    srand(time(NULL));

    // create a scene
    MyScene * scene = new MyScene();


    //create main window
    QMainWindow * window = new QMainWindow();

    //add window to the scene
    scene->addWidget(window);

    //add window background
    QGraphicsPixmapItem * background = new QGraphicsPixmapItem();

    background->setPixmap(QPixmap(":/images/background"));

    //add background to the scene
    scene->addItem(background);

   //add two firts cards to the scene

   MyPack *mypack_card1 = new MyPack;
   mypack_card1->card->setPos(50,60);
   scene->addItem(mypack_card1 ->card);

   MyPack *mypack_card2 = new MyPack;
   mypack_card2->card->setPos(200,60);
   scene->addItem(mypack_card2->card);

    //create button draw
    MyButton * draw = new MyButton();
    draw->setText("Draw");
    draw->setGeometry(40,1,100,50);

    //add button to the scene
    scene->addWidget(draw);

    //connect MyButton draw signal clicked to MyScene scene slot draw()
    QObject::connect(draw,SIGNAL(clicked()),scene,SLOT(draw()));


    // add a view to the scene
    QGraphicsView * view = new QGraphicsView(scene);

    view -> show();

    return a.exec();
}
