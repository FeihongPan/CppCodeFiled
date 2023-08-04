#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 2;

  auto swap = [&](auto& a, auto& b) 
  {
    auto temp = a;
    a = b;
    b = temp;
  };

  printf("a=%d, b=%d\n", a, b);
  swap(a, b);
  printf("a=%d, b=%d", a, b);

  return 0;
}