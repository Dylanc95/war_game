#ifndef STACK_H
#define STACK_H

#include <vector>
#include "Cards.h"

using namespace std;

class Cards;

class Stack {
private:
    int tos;
    vector<Cards> stack;

public:
    void push(const Cards& card); //TODO: fix this to add card object
    void pop();
    Cards peek() const; //TODO: fix this to return a card object
    bool isEmpty() const;
    int size() const;
};
#endif //STACK_H
