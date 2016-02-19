#include<myscene.h>
#include <mypack.h>






void MyScene::play_sound()
{

    card_sound->setMedia(QUrl("qrc:/sounds/card sound.mp3"));
    card_sound->play();

}

void MyScene::draw()
{

   if (first_time){
       desloc = 150;}
   else{
       desloc = desloc + 150;}

    //choose a random card
    MyPack * random_card = new MyPack();
    random_card ->card->setPos(200 + desloc,60);
    //add the card to the scene
    addItem(random_card->card);

    first_time = false;

}
