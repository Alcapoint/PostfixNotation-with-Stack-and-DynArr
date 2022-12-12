#include <iostream>
#include <cstdlib>
using namespace std;

#define i 10

class Stack
{
    int stack[i];
    int top;

public:
    void push();
    int pop();
    int peek();
};

void Stack::push()
{
    stack[++top] = i;
}

int Stack::pop()
{
    return stack[top--];
}

int Stack::peek()
{
    return stack[top];
}