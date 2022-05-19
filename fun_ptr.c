#include <stdio.h>
int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main() 
{ 
  	int x, y, choice, result;
  	int (*arr[4])(int, int);
  	arr[0] = sum;
  	arr[1] = sub;
  	arr[2] = mult;
  	arr[3] = div;
  	printf("Enter two integer numbers: ");
  	scanf("%d%d", &x, &y);
  	printf("Enter 0 to sum,\n1 to subtract,\n2 to multiply,\n3 to divide:\n ");
  	scanf("%d", &choice);
  	result = arr[choice](x, y);
  	printf("result is : %d", result);
return 0;}

int sum(int x, int y) 
{
	return(x + y);
}
int sub(int x, int y) 
{
	return(x - y);
}
int mult(int x, int y) 
{
	return(x * y);
}
int div(int x, int y) 
{
	if (y != 0) return (x / y); 
	else  return 0;
}

