#include <iostream>
using namespace std;

#define MAX 10

struct stack {
    int items[MAX];
    int top;
};

void createEmptyStack(stack *s) {
    s->top = -1;
}

int isfull(stack *s) {
    return s->top == MAX - 1;
}

int isempty(stack *s) {
    return s->top == -1;
}

void push(stack *s, int newitem) {
    if (isfull(s)) {
        cout << "STACK FULL\n";
        return;
    }
    s->items[++s->top] = newitem;
}

void pop(stack *s) {
    if (isempty(s)) {
        cout << "STACK EMPTY\n";
        return;
    }
    cout << "Item popped = " << s->items[s->top--] << endl;
}

void printStack(stack *s) {
    cout << "Stack: ";
    for (int i = 0; i <= s->top; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

int main() {
    stack s;
    createEmptyStack(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    printStack(&s);

    pop(&s);

    cout << "\nAfter popping out:\n";
    printStack(&s);
}

