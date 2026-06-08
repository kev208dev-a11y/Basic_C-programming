#include <stdio.h>
#include "myheader.h"
#include <ctype.h>

int main() {
  printf("%d\n", add(5, 2));
  printf("%d\n", sub(5, 2));
  printf("%d\n", mul(5, 2));
  printf("%.1f\n", div(5, 2));

  char c;
  printf("문자 입력: ");
  scanf("%c", &c);
  printf("%d", is_alpha(c));
  printf("%d",is_number(c));

  return 0;
}

int is_alpha(char c) {
  if('A'<=c&&c<='Z'||'a'<=c&&c<='z') {
    return 1;
  } else {
    return 0;
  }
}

int is_number(char a) {
  if('0'<=a&&a<='9') {
    return 1;
  }
  return 0;
}



