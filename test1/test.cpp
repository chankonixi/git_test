#include <iostream>
using namespace std;

void swap(int a, int b);
void swap1(int &a, int &b);
void swap2(int *a, int *b);

int main()
{
  int x = 10;
  int y = 20;
  cout << x << y <<endl;
  // swap1(x,y);
  swap2(&x,&y);
  cout << x << y <<endl;
  return 0;
}

void swap(int a, int b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void swap1(int &a, int &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void swap2(int *a, int *b)
{
  int *tmp;
  tmp = a;
  a = b;
  b = tmp;
}