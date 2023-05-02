#include<iostream>
using namespace std;

class P{
    public:
    P()
{
    cout<<"Constructor"<<endl;
}
    ~P(){

        cout<<"Deconstructor"<<endl;
    }
};

int main(){
    P*a=new P[1];
    delete []a;
}