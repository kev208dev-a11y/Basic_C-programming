//1차원 배열
#include <stdio.h>


int main() {
  // 배열 선언
  char arr[5];
  int arr2[5];
  double arr3[5];





int num[4];











  //배열명은 첫번째 배열요소의 시작주소값
  printf("%p",num);


  int score[5];
  int sum =0;

  for(int i=0;i<5;i++) {
    scanf("%d",&score[i]);
    sum+=score[i];
  }
  printf("%.2f",sum*1.00/5);
  return 0;
}