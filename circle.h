#include <iostream>
#include <string>
#include "point.h"
#include <math.h>
using namespace std;

class circle
{
public:
    //���캯��
    circle()
    {
        cout << "circle�Ĺ��캯��" <<endl;
    }

    ~circle()
    {
        cout << "circle����������" <<endl;
    }

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

    void setlocation(int x, int y)
    {
        c_x = x;
        c_y = y;
    }
    void determine(point p)
    {
        int p_x, p_y, destination;
        p_x,p_y=p.getlocation();
        destination = pow( c_x - p_x, 2 ) + pow(c_y - p_y, 2);
        destination = sqrt(destination);
        if( destination == radius)
            cout << "the point is on the circle" << endl;
        else if( destination > radius)
            cout << "the point is out the circle" << endl;
        else if( destination < radius)
            cout << "the point is in the circle" << endl;
    }
    
private:
    int radius;
    int c_x, c_y;
public:
    string Id;
protected:
    int height;
};