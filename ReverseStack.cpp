#include <iostream>

#define MAX 100

using namespace std;

class Stack {
private:
    int data[MAX];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int x) {
        if (topIndex >= MAX - 1) {
            return;
        }
        data[++topIndex] = x;
    }

    void pop() {
        if (topIndex < 0) {
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex < 0) return -1;
        return data[topIndex];
    }
    
    void display() {
        for(int i = topIndex; i >= 0; i--){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

void reverseStack(Stack& s) {
    int temp[MAX];
    int count = 0;

    while (s.top() != -1) {
        temp[count] = s.top();
        s.pop();
        count++;
    }

    for (int j = 0; j < count; j++) {
        s.push(temp[j]);
    }
}

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout << "Original Stack (Top to Bottom): ";
    s.display();
    
    reverseStack(s);

    cout << "Reversed Stack (Top to Bottom): ";
    s.display();

    return 0;
}
