#include<iostream>
using namespace std;

int cube(int);
float cube(float);

int main(){

    int a=5;
    float b=5.5;

    cout<< "Cube of integer number " << a << " is " << cube(a) <<endl;
    cout<< "Cube of float number " << b << " is " << cube(b) <<endl;

    return 0;

}

int cube(int x) {

return x*x*x;

}

float cube(float y){

return y*y*y;

}

/* Questions :- 
--> What is Pointer?
--> Explain 'this' pointer.
--> What is static and dynamic binding?
--> Binary operator overloading.
--> What is the difference between function overloading and function overwriting?
*/