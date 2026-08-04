#include <iostream>
using namespace std;

class Student {
protected:
    int RollNo;

public:
    Student() {
        RollNo = 0;
        cout << "Student Default constructor called" << endl;
    }

    Student(int r) {
        RollNo = r;
        cout << "Student Parameterized constructor called" << endl;
    }

    Student(const Student& s) {
        RollNo = s.RollNo;
        cout << "Student Copy constructor called" << endl;
    }

    ~Student() {
        cout << "Student Destructor called" << endl;
    }
};

class Sports {
protected:
    int Marks;

public:
    Sports() {
        Marks = 0;
        cout << "Sports Default constructor called" << endl;
    }

    Sports(int m) {
        Marks = m;
        cout << "Sports Parameterized constructor called" << endl;
    }

    Sports(const Sports& s) {
        Marks = s.Marks;
        cout << "Sports Copy constructor called" << endl;
    }

    ~Sports() {
        cout << "Sports Destructor called" << endl;
    }
};

class Result : public Student, public Sports {
private:
    int totalMarks;

public:
    Result() : Student(), Sports() {
        totalMarks = 0;
        cout << "Result Default constructor called" << endl;
    }

    Result(int r, int s, int t) : Student(r), Sports(s) {
        totalMarks = t;
        cout << "Result Parameterized constructor called" << endl;
    }

    Result(const Result& obj) : Student(obj), Sports(obj) {
        totalMarks = obj.totalMarks;
        cout << "Result Copy constructor called" << endl;
    }

    void display() {
        cout << "Roll No.     : " << RollNo << endl;
        cout << "Sports Marks : " << Marks << endl;
        cout << "Total Marks  : " << totalMarks << endl;
    }

    ~Result() {
        cout << "Result Destructor called" << endl;
    }
};

int main() {

    {
        cout << "==============Default Constructor==============\n";
        Result r1;
        r1.display();

        cout << "\n==============Parameterized Constructor==============\n";
        Result r2(34, 45, 550);
        r2.display();

        cout << "\n==============Copy Constructor==============\n";
        Result r3(r2);
        r3.display();
        cout << endl;
    }

    cout << "\n==============Program Ends===============\n";

    return 0;
}
  
  
  
  
    
