#include<myscene.h>
#include <mypack.h>


void MyScene::draw()
{

    //choose a random card
    MyPack * random_card = new MyPack();
    random_card ->card->setPos(350,60);
    //add the card to the scene
    addItem(random_card->card);


}
