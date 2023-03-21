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
class Bus
{
    
};
class train:public car,public Bus
{
    
};

int main()
{
    
train a;
a.speed();
    return 0;
}
