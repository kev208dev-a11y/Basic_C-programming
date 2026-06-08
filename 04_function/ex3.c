#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  printf("factorial: %d\n",factorial(n));
  printf("fibonaci: %d\n",fibo(n));
  

  return 0;
}

int factorial(int n) {
  int sum=1;
  for(int i=1;i<=n;i++) {
    sum*=i;
  }
  return sum;
}
int fibo2(int n) {
  if(n <=1) {
    return n;
  } else {
    int prev = 0, curr =1, next;
    for(int i=1;i<=n;i++) {
      next=prev+curr;
      prev=curr;
      curr=next;
    }
  }
}