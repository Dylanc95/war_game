#include "Stack.h"
#include <stdexcept>
using namespace std;

Stack::Stack() {
    vector<Cards> stack {};
}

void Stack::push(const Cards& card) {
    stack.push_back(card);
}

void Stack::pop() { //TODO: fix method to return Cards object
    if (!stack.empty()) {
        stack.pop_back();
    }
    else {
        throw out_of_range("Stack is empty");
    }
}

Cards Stack::peek() const {
    if (!stack.empty()) {
        return stack.back();
    }
    else {
        throw out_of_range("Stack is empty");
    }
}

bool Stack::isEmpty() const {
    return stack.empty();
}

int Stack::size() const {
    return stack.size(); // NOLINT(*-narrowing-conversions)
}
