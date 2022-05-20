#include <stdio.h>  
#include <string.h>  
struct Employee  
{     
   int id;  
   char name[20];  
   struct Date  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }doj;  
};  
int main( )  
{  
  int i;
  struct Employee e1[3];
  for(i=0;i<3;i++)
  {
      printf("Enter the id name date month and year :\n");
      scanf("%d%s%d%d%d",&e1[i].id,e1[i].name,&e1[i].doj.dd,&e1[i].doj.mm,&e1[i].doj.yyyy);
  }
  printf("id\tname\tdate\tmonth\tyear :\n");
  for(i=0;i<3;i++)
  
      printf("%d\t%s\t%d\t%d\t%d\n",e1[i].id,e1[i].name,e1[i].doj.dd,e1[i].doj.mm,e1[i].doj.yyyy);
  
   return 0;  
}  
