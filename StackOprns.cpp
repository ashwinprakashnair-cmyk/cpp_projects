#include<iostream>
using namespace std;
#define MAX 5

class Stack {
public:
    int arr[MAX];
    int top;
    
    Stack() {
        top = -1;
    }
    
    void push(int value) {
        if(top == MAX - 1) {
            cout << "Stack is in overflow" << endl;
        }
        else {
            top++;
            arr[top] = value;
            cout << value << " is pushed into stack" << endl;
        }
    }
    
    void pop() { 
        if(top == -1) {
            cout << "Stack is underflow" << endl;
        }
        else {
            cout << arr[top] << " is removed from Stack value" << endl;
            top--;
        }
    }
    
    void display() {
        if(top == -1) {
            cout << "stack is empty" << endl;
        } 
        else {
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << endl;
            }
        }
    }
    
    void peek() { 
        if (top < 0) {
            cout << "Stack is empty and in underflow state." << endl;
            return;
        }
        cout << "Top element (Peek): " << arr[top] << endl;
    }
}; 
    
int main() {
    Stack s1;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    
    s1.display();
    
    s1.pop(); 
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    
    s1.display();
    
    s1.push(100);
    
    s1.peek();
    
    s1.display();
    
    return 0;
}
