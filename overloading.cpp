#include <iostream>
using namespace std;
//ovrloading:in c++ overloading is concept. which is done with same function name but with different arguments is known
//as overloading..
int sum(int a, int b)
{
    cout<<"using this function with 2 arguments "<<endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "using this function with 3" << endl;
    return a + b + c;
}

int main()
{
    cout << sum(4, 4) << endl;
    cout << sum(4, 4, 4) << endl;
    return 0;
}
