#ifndef STACK_H
#define STACK_H
class Stack {
private:
    int tos;

public:
    Stack();
    ~Stack();
    void push(); //TODO: fix this to add card object
    void pop();
    int peek() const; //TODO: fix this to return a card object
    bool isEmpty() const;
    bool isFull() const;

    void setTos(int _tos);
    int getTos() const;
};
#endif //STACK_H
