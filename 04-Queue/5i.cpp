#include <iostream>
using namespace std;

int q[5], front = -1, rear = -1;

void enqueue()
{
    int x;

    if (rear == 4)
        cout << "Queue Overflow\n";
    else
    {
        cout << "Enter element: ";
        cin >> x;

        if (front == -1)
            front = 0;

        q[++rear] = x;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        cout << "Queue Underflow\n";
    else
        cout << "Deleted: " << q[front++] << endl;
}

void display()
{
    if (front == -1 || front > rear)
        cout << "Queue is Empty\n";
    else
    {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        case 4: break;
        default: cout << "Invalid Choice\n";
        }

    } while (ch != 4);

    return 0;
}