#include <iostream>
#include <string>

#ifndef POINT_H_
#define POINT_H_

using namespace std;

class point
{
private:
    int p_x, p_y;

public:
    //���캯��
    point()
    {
        cout << "point�Ĺ��캯��" <<endl;
    }

    ~point()
    {
        cout << "point����������" <<endl;
    }

    void setlocation(int x, int y)
    {
        p_x = x;
        p_y = y;
    }
    int getlocation()
    {
        //test
        return p_x,p_y;
    }
};

#endif