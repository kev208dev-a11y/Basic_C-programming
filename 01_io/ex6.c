//6.데이터 입력

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("%p %p %p", &a, &b, &c); 

    scanf("%d", &a);
    printf("%d\n", a);
    return 0;
}