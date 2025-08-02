class Cards {
private:
    string face;
    int value;
    string suit;

public:
    Cards(string _face, int _value, string _suit) {
        face = _face;
        value = _value;
        suit = _suit;
    }

    //getters
    string getFace() {
        return face;
    }
    int getValue() {
        return value;
    }
    string getSuit() {
        return suit;
    }

    //setters
    string setFace(string _face) {
        face = _face;
    }
    int setValue(int _value) {
        value = _value;
    }
    string setSuit(string _suit) {
        suit = _suit;
    }
}