#include<mypack.h>

int MyPack::rand_suit()
{
    int random = rand()%(4-1 + 1) + 1;
    return random;
}

int MyPack::rand_card()
{
    int random = rand()%(13-1 + 1) + 1;
     return random;
}


