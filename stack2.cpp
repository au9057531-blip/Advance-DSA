#include<iostream>
using namespace std;

class stack
{
    

public:
    int size;
    int top;
    int arr[20];

    stack(int n)
    {
        size = n;
        top = -1;
    }

    void push(int val)
    {
        if(top == size - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = val;
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << arr[top] << endl;
        top--;
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is Empty\n";
            return;
        }

        cout << "Stack elements: ";

        for(int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;
  

    stack s(n);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(60);

    s.display();

    s.pop();

    s.display();

    return 0;
}
