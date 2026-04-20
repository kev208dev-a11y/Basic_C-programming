// 1.연산자 (대입, 산술)
#include <stdio.h>
 
int main(int argc, char const *argv[])
{
        //대입연산자
        int a, b = 10;
        printf("%d, %d\n", a, b);   //쓰레기값, 10

        a = b = 20;
        printf("%d, %d\n", a, b);

        //산술연산자
        a = 5, b = 2;
        printf("%d + %d = %d\n", a, b, a + b);
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %d\n", a, b, a * b);
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);

        // 자동 형변환
        double d = a;     //5 -> 5.0
        printf("%.1f\n", d);

        d = a + 3.5;      // int + double -> 5.0 + 3.5 -> 8.5
        printf("%.1f\n", d);

        // 강제 형변환 (casting)
        printf("%.1f\n", (double)a / b);   // 5.0 / 2 -> 2.5

        // 정수 승격
        char c1 = 100, c2 = 100;
        printf("%d, %d\n", sizeof(c1), sizeof(c2));
        printf("%d\n", sizeof(c1 + c2));   // char + char -> int + int -> 4, 정수 승격
        
        char c = c1 + c2;
        printf("%d\n", c);

        // 정수 축소 변환
        a = 256;
        c = a;  // char <- int  (00000000 00000000 00000001 00000000) -> (00000000)
        printf("%d\n", c);
        a = 255;
        c = a;  // char <- int  (00000000 00000000 00000000 11111111) -> (11111111) -> -1
        printf("%d\n", c);
        
        d = 3.14;
        int i = d;
        printf("%d\n", i);   // 3.14 -> 3
        
        return 0;
}
