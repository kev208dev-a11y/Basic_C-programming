#include <stdio.h>

int main() {
    printf("123456790\n");
    printf("%10d\n", 123);  //10칸 확보, 오른쪽 정렬
    printf("%-10d\n", 123); //10칸 확보, 왼쪽 정렬
    
    printf("%.2f\n",3.14);
    printf("%10s\n", "apple");
    printf("%-10s\n", "apple");
    printf("%10s\n", "가나다");

    // KOR MATH ENG TOT AVG
    printf("%10s %10s %10s %10s %10s\n", "KOR", "MATH", "ENG", "TOT", "AVG");
    printf("%10d %10d %10d %10d %10.2f\n", 100, 100, 1000, 1200, 1200/3.0);

    printf("%-05d",123); // __123

    return 0;
}