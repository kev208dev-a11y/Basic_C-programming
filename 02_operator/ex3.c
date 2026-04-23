// 3. 연산자(비교, 논리)
#include <stdio.h>

int main(int argc, char const *argv[])
{
        // 비교 연산자
        int a = 1, b = 2;
        printf("%d\n", a < b);  // 1
        printf("%d\n", a > b);  // 0
        printf("%d\n", a <= b); // 1
        printf("%d\n", a >= b); // 0
        printf("%d\n", a == b); // 0
        printf("%d\n", a != b); // 1
        
        // 점수가 60점 이상이면 "Pass" 출력
        // 60점 미만이면 "Fail" 출력
        // 삼항 연산자로 작성
        int score = 90; 
        printf("%s\n", score >= 60 ? "Pass" : "Fail");
        
        // 논리 연산자
        a = 0, b = 1;
        printf("%d\n", !a);     // 1
        printf("%d\n", a && b); // 0
        printf("%d\n", a || b); // 1

        //윤년계산(365.2422)
        int year = 2026;
        if((year%4==0 && year%100!=0) || year%400==0) {
                printf("윤년입니다.\n");
        } else {
                printf("평년입니다.\n");
        }
        return 0;
}