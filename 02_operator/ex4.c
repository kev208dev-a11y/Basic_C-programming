#include <stdio.h>

int main() {
  int a=0, b=10;
  printf("%d\n",a&b);


  // | : 특정 비트 켜기
  // swap 처리
  // 1) temp변수 이용
  
  a=2, b=3;
  int temp = a;
  a=b;
  b=temp;
  a=10;
  a = a << 1;
  printf("%d\n",a);  //20




  //90점이상 A
  //80점이상 B
  //70점이상 C
  int score =0;
  char grade;
  grade = (score >= 90) ? 'A' :
          (score >= 80) ? 'B' :
          (score >= 70) ? 'C' : 'F';
  printf("%d점 %c등급\n",score,grade);
  return 0;
}