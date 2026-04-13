#include <stdio.h>

int main()
{
  // 대입연산자
  int a, b = 10;
  printf("%d, %d", a, b);
  a = b = 10;
  printf("%d, %d", a, b);
  // 산술연산자
  printf("%d + %d = %d", a, b, a + b);
  printf("%d - %d = %d", a, b, a - b);
  printf("%d * %d = %d", a, b, a * b);
  printf("%d / %d = %d", a, b, a / b);
  printf("%d %% %d = %d", a, b, a % b);

  // 자동형변환
  double d = 10; // 5->5.0
  printf("%.1f", d);

  d = a + 3.5;
  printf("%.1f", d);

  //강제형변환
  printf("%.1f", (double)a / 3);

  return 0;
}