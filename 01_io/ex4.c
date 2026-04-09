#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
      // 기본 자료형: 정수형, 실수형, 문자형
      // 1. 정수형: short, int(기본), long, long long 
      // 자료형 크기
      printf("%d, %d\n", sizeof(short), sizeof(long long));
      printf("%d, %d\n", sizeof(int), sizeof(unsigned int));
      printf("%d, %d\n", sizeof(float), sizeof(double));

      //값의 범위
        printf("%d ~ %d\n", SHRT_MIN, SHRT_MAX);
        printf("%d ~ %d\n", INT_MIN, INT_MAX);
        printf("%u\n", UINT_MAX);
        printf("%lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
        printf("%llu\n", ULLONG_MAX);

        float f;
        double d;
        long double ld;

        printf("%d, %d, %d\n", sizeof(f), sizeof(d), sizeof(ld));
        printf("%e, %e\n", -FLT_MAX, FLT_MAX);

        //유효자리수
        printf("%d, %d, %d\n", FLT_DIG, DBL_DIG, LDBL_DIG);

        float f2=1.23456;
        printf("%0.10f\n", f2);
        



  
        //3. 문자형: char
        printf("%d\n", sizeof(char));
        printf("%d ~ %d\n", CHAR_MIN, CHAR_MAX);

        return 0;



}