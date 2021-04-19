#include<iostream>
using namespace std;
// in the programming we are adding parameter to the functions...
class car 
{
    public:
        int speed(int maxspeed); // creating function in class with parameter
};

int car::speed(int maxspeed)
{
    return maxspeed;
}

int main()
{
    car myobj; // creating an object of car...
    cout << myobj.speed(200); // call the method with an argument
    return 0;
}
