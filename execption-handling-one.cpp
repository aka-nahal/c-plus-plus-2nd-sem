#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter any two numbers :- "<<endl;
    cin>>a>>b;

try {
   
    if (b==0){

     throw b;
}
c = a/b;

    cout<<"Answer is "<<c;


}catch(int d)
{
    cout<<"A number cannot divided by zero"<<endl;
}
}