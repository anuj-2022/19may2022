#include <stdio.h>

int main()
{
    int x=5,y=10,z=15;
    int *arr[5]={&x,&y,&z};//*arr is array of 5 integers pointers
    printf("%p\n",arr[0]);
    printf("%d\n",*arr[0]);
    printf("%p\n",arr[1]);
    printf("%d\n",*arr[1]);
    printf("%p\n",arr[2]);
    printf("%d\n",*arr[2]);
    printf("%d\n",sizeof(arr));
       return 0;
}
