#include<iostream>
using namespace std;
class lol
{
    int mess=10;
    // void box(int a)
    // {
    //     cout<<a;
    // }
    friend void lo(lol obj);//function declaraion 
};
void lo(lol obj)//function definition
{
    cout<<obj.mess;
}
int main()
{
    lol obj;
    lo(obj);//function call

}
