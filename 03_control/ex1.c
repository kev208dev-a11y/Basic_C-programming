#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  if(n%2==0){
    printf("짝수입니다.\n");
  }else{
    printf("홀수입니다.\n");
  }

  int a=0,b=20;
  if(a>b){
    printf("a");
  }else {
    printf("b");
  }


  int score = 90;
  char grade;
  if(score>=90) {
    grade='A';
  } else if(score>=80) {
    grade='B';
  } else if(score>=70) {
    grade='C';
  } else if(score>=60) {
    grade='D';
  } else {
    grade='F';
  }
  printf("%d점 -> %c등급\n",score,grade);
  return 0;
}