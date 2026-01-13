#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int isFull()
{
    if (top >= MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow! Cannot push %d\n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow! The stack is empty\n");
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        stack[top] = 0;
        top--;
    }
}

void peek()
{
    printf("Peeked element is: %d\n ", stack[top]);
}

void display()
{
    if (!isEmpty())
    {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Stack is empty.Stack underflow occurred!!!\n");
    }
}

int count()
{
    int total = top + 1;
    printf("Total Elements currently in stack are:%d\n", total);
    return total;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    count();
    peek();
    pop();
    count();
    pop();
    pop();
    display();
    pop();
    pop();
    pop();
    display();
    return 0;
}
