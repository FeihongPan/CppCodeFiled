#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 2;

  auto swap = [&](auto* pa, auto* pb) 
  {
    auto temp = *pa;
    *pa = *pb;
    *pb = temp;
  };

  printf("a=%d, b=%d\n", a, b);
  swap(&a, &b);
  printf("a=%d, b=%d", a, b);

  return 0;
}