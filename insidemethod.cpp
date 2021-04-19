#include<iostream>
using namespace std;
// here we are printing the hello world with help 
//of the method function using classes and objects 

//creating class //
class myclass           // the class
{
    public:                  // access specifier 
        void mymethod()           // method/function defined inside the class
        {
            cout << "hello world!";
        }
};

int main()
{
    myclass myobj; // creating an object of myclass
    myobj.mymethod(); // calling the method
    return 0;
}
