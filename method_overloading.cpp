#include <iostream>
using namespace std;
class ab
{
public:
    int summer(int a, int b)
    {
        int c = a + b;
        return c;
    }
    int summer(int a, int b, int c)
    {
        int d = a + b + c;
        return d;
    }
};
int main()
{
    class ab obj;
    cout << obj.summer(10, 10);
    return 0;
}
