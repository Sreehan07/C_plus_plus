#include <iostream>
using namespace std;
// now we are creating the class//
class myclass // crating class
{
public:              //access specifier//
    int mynum;       // attribute for (int variable)
    string mystring; //attribute for (string variable )
};
int main()
{
    myclass myobj; // creating an object of myclass//

    //access attributes and set values//
    myobj.mynum = 15;
    myobj.mystring = "some text";

    // print attributes values //
    cout << myobj.mynum << "\n";
    cout << myobj.mystring;
    return 0;
}
