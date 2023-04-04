#include<iostream>
using namespace std;

class student
{
    public:
    int uid;

    void getNumber()
    {

        cout<<"Enter your UID"<<endl;
        cin>>uid;
    }
    void putNumber(){

        cout<<"UID:- "<<uid;

    }
};

class test:virtual student {

    public:
    int sub1,sub2;

    void getMarks(){

        cout<<"Enter your marks :- "<<endl;
        cin>>sub1>>sub2;

    }
    
    void putMarks(){

        cout<<" Marks :- "<<sub1<<sub2<<endl;
    }
};

class sports:virtual student {
    public:
    int score;

    void putScore(){

        cout<<"Enter your score:-"<<endl;
        cin>>score;
    }


    void getScore(){

        cout<<"Score :-"<<score<<endl;
    }
};

class result:public test,public sports {
    public:
    int total;

    void display(){
        total = sub1 + sub2 + score;

        putNumber();
        putMarks();
        putScore();

        cout<<"Total is "<<total<<endl;
    }
};

int main(){
    result r;
    r.getNumber();
    r.getMarks();
    r.getScore();
    r.display();
}