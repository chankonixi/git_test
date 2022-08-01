#include <iostream>
#include <string>
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
    void setnumber()
    {
        radius = 1;
        Id = "2";
        height = 7;
    }
private:
    int radius;
public:
    string Id;
protected:
    int height;
};

int main()
{
    circle c1;
    c1.r2radius(3);
    c1.setnumber();
    c1.printradius();
    c1.Id="77";
    cout<<c1.Id<<endl;
    circle *p = &c1;
    p->printradius();
}