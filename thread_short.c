#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

#define	SIZE	5

void* sort_fun(void *p1);
void* pointer_fun(void *p2);
void* array_fun(int arr[]);


int main()
{
	
	int a[SIZE]={10,50,20,5,25};
	char *b="HYDERABAD";
	pthread_t id,id1,id2;

	if(pthread_create(&id,NULL,&sort_fun,a) != 0)
	{
		printf("thread is not created :\n");
		return 0;
	}
	if(pthread_join(id,NULL) != 0)
                return 0;

	if(pthread_create(&id1,NULL,&pointer_fun,b) !=0)
        {
                printf("thread is not created :\n");
                return 0;
        }
	if(pthread_join(id1,NULL) != 0)
                return 0;

	if(pthread_create(&id2,NULL,&array_fun,a) !=0)
	
        {
                printf("thread is not created :\n");
                return 0;
        }
	if(pthread_join(id2,NULL) !=0)
                return 0;
	return 0;
}

void* sort_fun(void *p1)
{
	int *ptr=(int *)p1;
	int i,j,temp=0;
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(ptr[j] < ptr[i])
			{
				temp = ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf("sorted element is : \n");	
	for(i=0;i<SIZE;i++)
	printf("%d\t",*ptr++);
}

void* pointer_fun(void *p2)
{
	char *arr=(char*)p2;
	int i;	
	printf("\nstring is :\n");
	for(i=0;*arr!='\0';i++)
	{
		if((*arr > 64) && (*arr < 91))
			printf("%c",*arr++ + 32);
	}
	printf("\n");
}
void* array_fun(int arr[])
{
	
	int i,n,flag=0;
	printf("\nEnter the data :\n");
	scanf("%d",&n);
	for(i=0;i<SIZE;i++)
	{
		if((arr[i] ^ n) == 0)
		flag=1;
	}
	if(flag == 1)
		printf("data is found : %d\n",n);
	else
		printf("data is not found :\n");
}
