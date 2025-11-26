#include <iostream>
using namespace std;

const int MAXSIZE = 4;
int stackArr[MAXSIZE];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAXSIZE - 1;
}

void push(int x) {
    if (isFull()) {
        cout << "Stack is FULL!" << endl;
    } else {
        top++;
        stackArr[top] = x;
        cout << x << " " << endl;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "Stack is EMPTY!" << endl;
        return -1;
    } else {
        int value = stackArr[top];
        top--;
        return value;
    }
}

int peek() {
    if (!isEmpty())
        return stackArr[top];
    else {
        cout << "Stack is empty!" << endl;
        return -1;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    cout << "Top element: " << peek() << endl;

    cout << "Stack elements: " << endl;
    while (!isEmpty()) {
        cout << pop() << endl;
    }
return 0;
}
