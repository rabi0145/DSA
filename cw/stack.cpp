#include <iostream>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "There is not any element in stack.";
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack Empty!!" << endl;
            return -1;
        }
        return arr[top];
    }

    int empty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty() << endl;
    return 0;
}