// 2. 함수 - 소수 판별
#include <stdio.h>
#include <math.h>
#include <time.h>

int is_prime1(int n);
int is_prime2(int n);
int is_prime3(int n);

int main(int argc, char const *argv[]){
    int n = 7;
    clock_t start, end;
    start = clock();
    printf("%d\n", is_prime1(n));
    end = clock();
    
    return 0;
}

int is_prime1(int n){
    if (n<=1) return 0;
    for (int i = 2; i < n; i++){    // 시간복잡도: O(n)
        if (n%i==0) return 0;   // 1,000,000
    }
    return 1;
}

int is_prime2(int n){
    if (n<=1) return 0;
    for (int i = 2; i <= n / 2; i++){    // 시간복잡도: O(n/2)
        if (n%i==0) return 0;   // 500,000
    }
    return 1;
}

int is_prime3(int n){
    if (n<=1) return 0;
    for (int i = 2; i <= sqrt(n); i++){    // 시간복잡도: 0(root n)
        if (n%i==0) return 0;   // 1,000
    }
    return 1;
}