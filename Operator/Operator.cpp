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
    int getX()
    {
        return this->x;
    }
    c_Per operator/(c_Per other)
    {
        return c_Per(this->x / other.x);
    }
    c_Per operator*(c_Per other)
    {
        return c_Per(this->x * other.x);
    }
    bool operator==(c_Per other)
    {
        return ((this->getX() == other.getX()));
        //return!(*this == other);
    }
    bool operator!=(c_Per other)
    {
        return !(*this == other);
    }
    bool operator>(c_Per other)
    {
        return ((this->getX() > other.getX()));
    }
    bool operator<(c_Per other)
    {
        return !(*this > other);
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
    bool res = (a < b);
    cout << res;
   // res.print();
}


