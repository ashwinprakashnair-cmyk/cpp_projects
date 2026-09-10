#include <iostream>

#define MAX 100

using namespace std;

class MinStack {
private:
    int data[MAX]; 
    int topIndex;
    int minVal;

public:
    MinStack() {
        topIndex = -1;
        minVal = 0;
    }

    void push(int x) {
        if (topIndex >= MAX - 1) {
            return;
        }

        if (topIndex == -1) {
            topIndex++;
            data[topIndex] = x;
            minVal = x;
        } else if (x >= minVal) {
            topIndex++;
            data[topIndex] = x;
        } else {
            topIndex++;
            data[topIndex] = 2 * x - minVal;
            minVal = x;
        }
    }

    void pop() {
        if (topIndex < 0) {
            return;
        }

        if (data[topIndex] < minVal) {
            minVal = 2 * minVal - data[topIndex];
        }
        topIndex--;
    }

    int top() {
        if (topIndex < 0) return -1;
        
        if (data[topIndex] < minVal) {
            return minVal;
        }
        return data[topIndex];
    }

    int getMin() {
        if (topIndex < 0) return -1;
        return minVal;
    }
    
    void display(){
        cout << "Stack is: " << "\t" << endl;
        for(int i = topIndex; i >= 0; i--){
            cout << data[i] << endl;
        }
    }
};

int main() {
    MinStack s;
    s.push(18);
    s.push(19);
    s.push(29);
    s.push(15);
    
    s.display();

    cout << "Minimum: " << s.getMin() << endl;
    cout << "Top: " << s.top() << endl;

    s.pop();
    cout << "After pop, Minimum: " << s.getMin() << endl;
    cout << "After pop, Top: " << s.top() << endl;

    return 0;
}
