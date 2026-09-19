#include <iostream>
using namespace std;

int stack[5], top = -1;

void push()
{
    int x;
    if (top == 4)
        cout << "Stack Overflow\n";
    else
    {
        cout << "Enter element: ";
        cin >> x;
        stack[++top] = x;
    }
}

void pop()
{
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << "Deleted: " << stack[top--] << endl;
}

void peek()
{
    if (top == -1)
        cout << "Stack is Empty\n";
    else
        cout << "Top Element: " << stack[top] << endl;
}

void display()
{
    if (top == -1)
        cout << "Stack is Empty\n";
    else
    {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: cout << "Exit"; break;
        default: cout << "Invalid Choice";
        }
    } 
    while (ch != 5);

    return 0;
}