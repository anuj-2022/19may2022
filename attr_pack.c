#include <stdio.h>  
  
struct data  
{  
    int a;  
    char b;  
//    double c;  
}__attribute__((packed));  ;  
int main()  
{  
  struct data var; // variable declaration of type base  

  printf("The size of the var is : %ld\n", sizeof(var));  
  
    return 0;  
}  
