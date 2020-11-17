#include <iostream>

using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout<<"\n\tMercedes Benz is my favourite Car.";
    }
};
class Car: public Vehicle
{

};


int main()
{
    Car obj;
    cout<<"\n";
    return 0;
}
