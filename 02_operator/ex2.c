#include <stdio.h>

int main() {
  int a=0;
  
  a+=3;
  printf("%d\n", a);

  a-=3;
  printf("%d\n", a);

  a*=3;
  printf("%d\n", a);

  a/=3;
  printf("%d\n", a);

  a%=3;
  printf("%d\n", a);

  a++;
  printf("%d\n", a);

  a--;
  printf("%d\n", a);

  int b = ++a;
  printf("%d, %d\n", a, b);
  
  return 0;
}