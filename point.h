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
    void setlocation(int x, int y)
    {
        p_x = x;
        p_y = y;
    }
    int getlocation()
    {
        return p_x,p_y;
    }
};

#endif