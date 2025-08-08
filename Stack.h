#ifndef STACK_H
#define STACK_H

#include <vector>
#include "Cards.h"

using namespace std;

class Cards;

class Stack {
private:
    vector<Cards> stack;

public:
    Stack();
    void push(const Cards& card);
    void pop();
    Cards peek() const;
    bool isEmpty() const;
    int size() const;
};
#endif //STACK_H
