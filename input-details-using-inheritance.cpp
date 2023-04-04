#include<iostream>
using namespace std;

class student
{
public:
    string uid;

    void getNumber()
    {
        cout << "Enter your UID: ";
        cin >> uid;
    }

    void putNumber()
    {
        cout << "UID: " << uid << endl;
    }
};

class test : public student
{
public:
    int sub1, sub2;

    void getMarks()
    {
        cout << "Enter your marks: ";
        cin >> sub1 >> sub2;
    }

    void putMarks()
    {
        cout << "Marks: " << sub1 << " " << sub2 << endl;
    }
};

class sports : public student
{
public:
    int score;

    void putScore()
    {
        cout << "Enter your score: ";
        cin >> score;
    }

    void getScore()
    {
        cout << "Score: " << score << endl;
    }
};

class result : public test, public sports
{
public:
    int total;

    void display()
    {
        total = sub1 + sub2 + score;

        putNumber();
        putMarks();
        putScore();

        cout << "Total: " << total << endl;
    }
};

int main()
{
    result r;
    r.getNumber();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
