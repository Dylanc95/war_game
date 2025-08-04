#include "Cards.h"
#include <string>

using namespace std;

Cards::Cards(const string &_face, const int _value, const string &_suit) {
    face = _face;
    value = _value;
    suit = _suit;
}

//getters
string Cards::getFace() {
    return face;
}
int Cards::getValue() const {
    return value;
}
string Cards::getSuit() {
    return suit;
}

//setters
void Cards::setFace(const string &_face) {
    face = _face;
}
void Cards::setValue(const int _value) {
    value = _value;
}
void Cards::setSuit(const string &_suit) {
    suit = _suit;
}
