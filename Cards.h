#ifndef CARDS_H
#define CARDS_H

#include <string>

using namespace std;

class Cards {
private:
    string face;
    int value;
    string suit;

public:
    Cards(const string &_face, int _value, const string &_suit); //Constructor for building the cards

    //Getters
    string getFace();
    int getValue() const;
    string getSuit();

    //Setters
    void setFace(const string &_face);
    void setValue(int _value);
    void setSuit(const string &_suit);
};

#endif //CARDS_H
