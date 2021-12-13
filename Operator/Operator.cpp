#include <iostream>
using namespace std;
class c_Per
{
    int x;
   // int y;
public:
    c_Per()
    {
        this->x = 0;
       // this->y = 0;
    }
    c_Per(int x)
    {
        this->x = x;
       // this->y = y;
    }
    c_Per operator/(c_Per other)
    {
        return c_Per(this->x / other.x);
    }
    void print()
    {
        cout << this->x;
    }
};
int main()
{
    c_Per a(20);
    c_Per b(5);
    c_Per res = (a / b);
    
    res.print();
}


