#include <iostream>
#include <string>
#include "point.h"
#include "circle.h"
using namespace std;

int main()
{
    circle c1;
    point p1;
    p1.setlocation(2,4);
    c1.setlocation(5,6);
    c1.r2radius(1);
    c1.determine(p1);
    return 0;
}