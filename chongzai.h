#include <iostream>
#include <string.h>
using namespace std;

#ifndef CHONGZAI_H_
#define CHONGZAI_H_

void chongz()
{
    cout<< "�޲�����" <<endl;
}

void chongz(int a)
{
    cout<< "����������" <<endl;
}

int chongz(int a, int b)
{
    cout<< "˫��������" <<endl;
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