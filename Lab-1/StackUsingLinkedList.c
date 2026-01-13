#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
typedef struct
{
    Node *top; // pointer to top node
} Stack;
void init(Stack *s)
{
    s->top = NULL;
}
int isEmpty(Stack *s)
{
    return s->top == NULL;
}
void push(Stack *s, int x)
{
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node)
    {
        printf("Error: Memory allocation failed\n");
        return;
    }
    node->data = x;
    node->next = s->top;
    s->top = node;
    printf("Pushed %d\n", x);
}
int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Error: Stack Underflow\n");
        return -1;
    }
    Node *temp = s->top;
    int value = temp->data;
    s->top = temp->next;
    free(temp);
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
    return s->top->data;
}
void clear(Stack *s)
{
    while (!isEmpty(s))
    {
        pop(s);
    }
}
int main()
{
    Stack s;
    init(&s);
    pop(&s); // underflow
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("Top = %d\n", peek(&s));
    clear(&s);
    return 0;
}
