#include <iostream>
using namespace std;

#define MAX 5

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return (top == MAX - 1);
    }

    bool isEmpty() {
        return (top == -1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            top++;
            arr[top] = x;
            cout << x << " pushed to stack." << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return -1;
        } else {
            int poppedValue = arr[top];
            top--;
            return poppedValue;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty." << endl;
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Popped element: " << s.pop() << endl;

    s.display();

    if (s.isEmpty()) {
        cout << "Stack is now empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
