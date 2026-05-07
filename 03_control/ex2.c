#include <stdio.h>

int main() {
  int score = 90;
  char grade;
  switch(score/10) {
    case 10:
    case 9:
    grade='a';
    case 8:
    grade = 'b';
    default:
    grade='F';
  }
  printf("%c",grade);

  char op;
  int op1,op2,result;
  printf("연산식 입력(2+3)");
  scanf("%d %c %d",&op1,&op,&op2);
  switch(op) {
    case '+':
    result = op1 + op2;
    break;
    case '-':
    result = op1-op2;
    break;
  }
  printf("%d",result);


  int menu;
  printf("1. 라면\n");
  printf("2. 치킨\n");
  printf("3. 삼겹살\n");
  scanf("%d",&menu);
  printf("선택한 메뉴 : ");
  switch(menu) {
    case 1:
    printf("라면");
    break;
    case 2:
    printf("치킨");
    break;
    case 3:
    printf("삼겹살");
    break;
    default:
    printf("입력 없음.");
  }
  return 0;
}