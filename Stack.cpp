#include "Stack.h"
#include <iostream>

Stack::Stack() {
    tos = -1;
}

Stack::~Stack() {} //TODO: finish method

void Stack::push() {} //TODO: finish method

void Stack::pop() {} //TODO: finish method

int Stack::peek() const {} //TODO: finish method

bool Stack::isEmpty() const {
    if (tos == -1) {
        return true;
    }
    else {
        return false;
    }
}

bool Stack::isFull() const {} //TODO: finish method

void Stack::setTos(int _tos) {
    tos = _tos;
}

int Stack::getTos() const {
    return tos;
}