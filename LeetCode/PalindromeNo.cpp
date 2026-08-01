#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        long reversed = 0;
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }
        return original == reversed;
    }
};

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    Solution sol;
    if (sol.isPalindrome(x)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}