#include "tests.h"

#include <iostream>
#include <string>

#include "Cards.h"

using namespace std;

void Tests::cardsTest() {
    Cards aceOfSpades("Ace", 1, "Spades");
    Cards kingOfSpades("King", 13, "Spades");
    Cards tenOfHearts("Ten", 10, "Hearts");
    Cards fiveOfClubs("Five", 5, "Clubs");
    Cards sixOfDiamonds("Six", 6, "Diamonds");

    cout << aceOfSpades.getFace() << endl;
    cout << kingOfSpades.getValue() << endl;
    cout << tenOfHearts.getSuit() << endl;

    fiveOfClubs.printCardInfo();
}
