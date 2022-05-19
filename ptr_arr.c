#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int (*pa)[5];//*pa is a pointer, pointing to entire array
    pa=arr;
    //pa=&arr;
    printf("%p\n",pa);
    printf("%d\n",arr[1]);
    printf("%d\n",*pa[0]);
    printf("%p\n",++pa);
    printf("%d\n",*pa[2]);
    printf("%d\n",sizeof(pa));
    return 0;
}
