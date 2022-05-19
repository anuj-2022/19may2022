#include <stdio.h>

#define N	2

void display(int num[N][N]);
int main() 
{
  int num[N][N];
  int i,j;
  printf("Enter 4 numbers:\n");
  for(i = 0; i < N; ++i) 
  {
    for(j = 0; j < N; ++j) 
	{
      scanf("%d", &num[i][j]);
    }
  }
  // pass multi-dimensional array to a function
  display(num);
  return 0;
}

void display(int num[N][N])
{
  int i,j;	
  printf("Displaying Array elements:\n");
  for (i = 0; i < N; ++i) 
  {
    for (j = 0; j < N; ++j) 
	{
      printf("%d\t", num[i][j]);
    }
    printf("\n");
  }
}
