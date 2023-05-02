#include<iostream>
using namespace std;

int main(){

    int l,s=0;
    cout<<"ENter the number of students:- "<<endl;

    cin>>l;

    int*p = new int [s];

    cout<<"Enter the marks:"<<endl;

    for(int i = 0; i < l;i++){

        cin>>*(p+i);

    }

    for(int i=0;i<l;i++){

        s+=*(p+i);
    }
cout<<"sum is "<<s<<endl;
return 0;
}