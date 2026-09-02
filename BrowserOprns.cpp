#include<iostream>
#include<string>
using namespace std;
#define MAX 5

class BrowserHistory {
public:
    string arr[MAX];
    int top;
    
    BrowserHistory() {
        top = -1;
    }
    
    void visit(string url) {
        if(top == MAX - 1) {
            cout << "History limit reached! (Overflow)\n" << endl;
        }
        else {
            top++;
            arr[top] = url;
            cout << "Visited: " << url << endl;
        }
    }
    
    void goBack() { 
        if(top == -1) {
            cout << "No history available to go back! (Underflow)\n" << endl;
        }
        else {
            cout << "Went back from: " << arr[top] << endl;
            top--;
        }
    }
    
    void displayHistory() {
        if(top == -1) {
            cout << "Browsing history is empty.\n" << endl;
        } 
        else {
            cout << "\n--- Browsing History ---\n" << endl;
            for(int i = top; i >= 0; i--) {
                cout << arr[i] << endl;
            }
        }
    }
    
    void currentPage() { 
        if (top == -1) {
            cout << "No current page open.\n" << endl;
            return;
        }
        cout << "Current Page: " << arr[top] << endl;
    }
}; 
    
int main() {
    BrowserHistory portal;
    
    portal.visit("https://web.whatsapp.com/");
    portal.visit("https://github.com/");
    portal.visit("https://gemini.google.com/app");
    portal.visit("https://chatgpt.com/");
    portal.visit("https://www.news18.com/cities/patna-news/nepal-floods-bring-mystery-fish-to-bihar-risks-symptoms-you-need-to-know-10303617.html?utm_source=firefox-newtab-en-intl");
    portal.visit("https://www.businesstoday.in/india/photo/iphone-17-pro-gets-cheaper-before-iphone-18-pro-launch-check-the-new-price-552352-2026-09-01?utm_source=firefox-newtab-en-intl");
    
    portal.goBack(); 
    portal.goBack();
    portal.goBack();
    portal.goBack();
    portal.goBack();
    portal.goBack();
    
    portal.visit("https://www.businesstoday.in/india/photo/iphone-17-pro-gets-cheaper-before-iphone-18-pro-launch-check-the-new-price-552352-2026-09-01?utm_source=firefox-newtab-en-intl");
    
    portal.currentPage();
    
    portal.displayHistory();
    
    return 0;
}
