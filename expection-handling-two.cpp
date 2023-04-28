#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    try{
        if (a==1)
        throw a; 
        else if (a==2)
        throw'A';
        else if(a==3)
        throw 2.8;
    }

    catch(int a){

        cout<<"integer expection caught"<<endl;
    }

    catch(char c){
        cout<<"character expection caught"<<endl;

    }

    catch(double d){

        cout<<"double type expection caught"<<endl;
    }

    cout<<"the program is done"<<endl;
}