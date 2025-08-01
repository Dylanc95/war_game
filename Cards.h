#include <iostream>
using namespace std;

#ifndef CARDS_H
#define CARDS_H
class Cards {
private:
    string face;
    int value;
    string suit;

public:
    Cards(string _face, int _value, string _suit); //Constructor for building the cards

    //Getters
    string getFace();
    int getValue();
    string getSuit();

    //Setters
    string setFace(string _face);
    string setValue(int _value);
    string setSuit(string _suit);
}

#endif //CARDS_H
