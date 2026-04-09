// 기본 출력
#include <stdio.h> //주석 처리를 해도 자동으로 들어가는 경우가 있음

int main(int argc, char const *argv[])
{

    //gcc 컴파일 명령
    //gcc -c ex1.c : 컴파일
    //gcc ex1.o -o  ex1: 링크
    //gcc ex1.c -o ex1: 빌드

    //이스케이프 문자
   printf("12345678901234567890\n");
    printf("a\tb\tc\n");
    printf("aa\tbb\tcc\n");

    printf("학번: \\1324\\\n");
    printf("이름: \"이채호\"\n");
}