#include<iostream>
using namespace std;
class car 
{
    public:
    string brand;
    string model;
    int year;
};

int main()
{
    // creating an object of car //
    car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "X5";
    carobj1.year = 1999;
    
    // creating another object of car//
    car carobj2;
    carobj2.brand = "ford";
    carobj2.model = "Mustang";
    carobj2.year = 1969;
    
    //printing attributes values//
    cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << "\n";
    cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << "\n";
    return 0;
}
