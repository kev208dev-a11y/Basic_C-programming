// 5. 변수
#include <stdio.h>

int global_var;  //전역변수는 초기화 하지 않으면 0으로 자동 초기화

void my_func();   //함수 프로토타입 선언

int main(int argc, char const *argv[])
{
        // 변수 선언: 자료형 변수명
        int num;
        
        printf("%d\n", num);    // 쓰레기값
        num = 10;

        int n1 = 10, n2 = 20;
        printf("%d, %d\n", n1, n2);

        // 변수의 종류: 지역변수, 전역변수
        int x = 10;{
                int y = 20;
                printf("%d, %d\n", x, y);
        }
        // printf("%d, %d\n", x, y);
        
        // 전역변수
        printf("%d\n", global_var);
        my_func();   //함수 호출
        printf("%d\n", global_var);

        //변수의 범위(Scope)
        int i=3;
        {
            int i=5;
            printf("%d\n", i);
        }
        printf("%d\n", i);

        //식별자 규칙
        int score2; //2score X
        int _score;
        int $score;
        int Score;
        int Int;

        //상수
        int max_len=10; //변수
        const int Max_Len=10; //상수

        max_len=20;
        //Max_Len=20; //상수이므로 수정 불가

        return 0;
}

void my_func()
{
   printf("%d\n", global_var);
   global_var=10;
}