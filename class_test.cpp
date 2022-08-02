#include <iostream>
#include <string>
#include "point.h"
#include "circle.h"
#include "chongzai.h"
using namespace std;

void chongz()
{
    cout<< "无参数调用" <<endl;
}

void chongz(int a)
{
    cout<< "一个参数调用" <<endl;
}

int chongz(int a, int b)
{
    cout<< "两个参数调用" <<endl;
    return 0;
}

void diaoyong()
{
    int a=10;
    chongz();
    chongz(10);
    chongz(a);
    chongz(1,2);
}

int main()
{

    circle c1;
    point p1;
    // p1.setlocation(2,4);
    // c1.setlocation(5,6);
    // c1.r2radius(1);
    // c1.determine(p1);
    // diaoyong();
    return 0;
}