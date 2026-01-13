#include <stdio.h>

#include <stdlib.h>
#define CAPACITY 5 // change capacity as needed
typedef struct
{
    int arr[CAPACITY];
    int top; // index of the top element (-1 when empty)
} Stack;
void init(Stack *s)
{
    s->top = -1;
}
int isEmpty(Stack *s)
{
    return s->top == -1;
}
int isFull(Stack *s)
{
    return s->top == CAPACITY - 1;
}
void push(Stack *s, int x)
{
    if (isFull(s))
    {
        printf("Error: Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = x; // pre-increment top and assign
    printf("Pushed %d\n", x);
}
int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Error: Stack Underflow\n");
        return -1; // sentinel value
    }
    int value = s->arr[(s->top)--]; // post-decrement top
    printf("Popped %d\n", value);
    return value;
}
int peek(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return s->arr[s->top];
}
int main()
{
    Stack s;
    init(&s);
    // Test cases
    pop(&s); // underflow
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("Top = %d\n", peek(&s));
    push(&s, 40);
    push(&s, 50);
    push(&s, 60); // overflow
    while (!isEmpty(&s))
    {
        pop(&s);
    }
    return 0;
}
