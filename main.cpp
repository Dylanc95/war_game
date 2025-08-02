#include "Cards.h"
#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    Cards aceOfSpades("Ace", 1, "Spades");

    cout << "I play the " << aceOfSpades.getFace() << " of "
        << aceOfSpades.getSuit() << " which equals " <<
        aceOfSpades.getValue() << "." << endl;
}
