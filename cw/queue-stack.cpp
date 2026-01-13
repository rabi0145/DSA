#include <iostream>
using namespace std;

#define n 100

class Queue
{
    int *arr;
    int front;
    int rear;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        arr[rear] = x;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    int Front()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Empty!!" << endl;
            return -1;
        }
        return arr[front];
    }

    int empty()
    {
        if (front == -1 || front > rear)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << q.Front() << endl;

    q.dequeue();
    cout << q.Front() << endl;

    q.dequeue();
    q.dequeue();
    cout << q.Front() << endl;

    q.dequeue();
    q.dequeue();

    cout << q.Front() << endl;
    cout << q.empty() << endl;

    return 0;
}
