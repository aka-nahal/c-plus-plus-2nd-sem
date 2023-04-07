#include <iostream>
using namespace std;

class Base {
   public:
    void hello() {
        cout << "Random" << endl;
    }
};

class Derived : public Base {
   public:
    void hello() {
        cout << "random text" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.hello();
    return 0;
}