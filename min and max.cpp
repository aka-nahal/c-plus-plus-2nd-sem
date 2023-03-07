#include<iostream>
using namespace std;

inline void max(){

    int a,b,c,num;
    cin>>a>>b>>c;
    num = a > b && a>c ? a:(b>c?b:c);
    cout<<num;
}


inline void min(){

    int a,b,c,num;
    cin>>a>>b>>c;
    num = a < b && a>c ? a:(b>c?b:c);
    cout<<num;
}

int  main(){

max();
min();

return 0;

}

