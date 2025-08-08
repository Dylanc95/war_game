#include "tests.h"

#include <iostream>
#include <string>

#include "Cards.h"
#include "Stack.h"

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

void Tests::stacktest() {
    Stack deckStack;

    Cards aceOfSpades("Ace", 1, "Spades");
    Cards kingOfSpades("King", 13, "Spades");
    Cards tenOfHearts("Ten", 10, "Hearts");
    Cards fiveOfClubs("Five", 5, "Clubs");
    Cards sixOfDiamonds("Six", 6, "Diamonds");

    deckStack.push(aceOfSpades);
    deckStack.push(kingOfSpades);
    deckStack.push(tenOfHearts);
    deckStack.push(fiveOfClubs);
    deckStack.push(sixOfDiamonds);

    cout << "Deck formed" << endl;

    cout << deckStack.isEmpty() << endl;

    deckStack.size();

    deckStack.peek();

    deckStack.pop();
    deckStack.pop();
    deckStack.pop();
    deckStack.pop();
    deckStack.pop();
    deckStack.pop();

    deckStack.peek();
    deckStack.size();

}
