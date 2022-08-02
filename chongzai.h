#include <iostream>
#include <string.h>
using namespace std;

#ifndef CHONGZAI_H_
#define CHONGZAI_H_

void chongz()
{
    cout<< "无参重载" <<endl;
}

void chongz(int a)
{
    cout<< "单参数重载" <<endl;
}

int chongz(int a, int b)
{
    cout<< "双参数重载" <<endl;
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

#endif