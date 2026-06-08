#include <stdio.h>
#include <string.h>
int main()
{

  // 2차원배열
  int arr[2][3];
  printf("%d\n", sizeof(arr));       // 24
  printf("%d\n", sizeof(arr[0]));    // 12
  printf("%d\n", sizeof(arr[0][0])); // 4

  int num[2][3] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", num[i][j]);
    }
    printf("\n");
  }
  printf("%p\n", num);
  printf("%p\n", num[0]);
  printf("%p\n", num[0][0]);

  printf("%p\n", num[1]);
  printf("%p\n", num[1][0]);


  

  return 0;
}