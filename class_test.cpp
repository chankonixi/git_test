#include <iostream>
using namespace std;

const double PI = 3.14;
class circle
{
public:
    void r2radius(int r)
    {
        radius = r;
    }
    void printradius()
    {
        cout<<radius<<endl;
    }
private:
    int radius;
};

int main()
{
    circle c1;
    c1.r2radius(3);
    c1.printradius();
}