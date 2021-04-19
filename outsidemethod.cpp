#include<iostream>
using namespace std;

//outside method we need to create the function inside the 
//class and then we need to use it outside of the class.. 

class myclass     // the class... 
{
    public:           // access specifier ...
        void mymethod(); // method/function declaration...
};

// method/function definition outside the class....

void myclass::mymethod()
{
    cout << "HELLO WORLD!";
}

int main()
{
    myclass myobj;      // creating an object of myclass...
    myobj.mymethod();   //calling the method...
    return 0;
}
