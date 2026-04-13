#include<stdio.h>

int main(int argc, char const *argv[])
{
   int a, b, c;

   //printf("%p %p %p\n", &a, &b, &c);

   //scanf("%d %d", &a, &b);
   //printf("%d, %d\n", a, b);

   //10:20:30
   //scanf("%d:%d:%d\n", &a, &b, &c);
   //printf("%d시 %d분 %d초\n", a, b, c);

   //scanf("%d", &a);

   //int r=scanf("%d", &a);
   //printf("%d\n", a);
   //printf("%d\n", r); //문자를 입력하면 0이 출력됨 (의미 오류)

   //%%f, %lf 구분
   float f;
   double d;
   scanf("%f\n", &f);
   scanf("%lf\n", &d);
   printf("%f %lf %d\n", f, d);

   //%c사용시 주의
   char ch;
   getchar();
   scanf(" %c", &ch);
   printf("%c\n", ch);

   float height;
   double weight;
   char blood_type;

   scanf("%f %lf %c", &height, &weight, &blood_type);
   printf("키: %0.2f, 몸무게: %0.2lf, 혈액형: %c\n", height, weight, blood_type);
   return 0;
}