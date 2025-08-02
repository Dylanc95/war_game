#include "Cards.h"

Cards::Cards(string _face, int _value, string _suit) {
    face = _face;
    value = _value;
    suit = _suit;
}

//getters
string Cards::getFace() {
    return face;
}
int Cards::getValue() {
    return value;
}
string Cards::getSuit() {
    return suit;
}

//setters
void Cards::setFace(string _face) {
    face = _face;
}
void Cards::setValue(int _value) {
    value = _value;
}
void Cards::setSuit(string _suit) {
    suit = _suit;
}
