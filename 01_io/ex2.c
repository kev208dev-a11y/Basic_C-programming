
#include <stdio.h>

int main() {

    printf("%d\n", 10);
    printf("%u\n", -10); 
    
    //8진수
    printf("%o\n", 10);
    //16진수
    printf("%x\n", 10);

    printf("%f\n", 3.14);
    printf("%c\n", 'A');
    printf("%s\n", "가나다");
    printf("%c\n","A");

    printf("%p\n", main);
    printf("%%\n");

    printf("%d\n", 'A');

    printf("%d\n", 'A'+1);
    printf("%c\n", 'A'+1);
    printf("%d\n", 'Z'-'A'+1);
    
    return 0;
}