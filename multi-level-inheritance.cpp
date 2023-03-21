#include <iostream>

using namespace std;

class car 
{
public:
void speed()
{
    
    cout<<"Speed limit is 60 mph";
}
};
class Bus:public car
{
    
};
class train:public car
{
    
};

int main()
{
    
train a;
a.speed();
    return 0;
}
