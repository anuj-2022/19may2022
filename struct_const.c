#include<stdio.h>
#include<string.h>
struct data
{
         int roll_no;
        int marks;
};

int main()
{
        struct data stob;
        stob.roll_no=3456;
        stob.marks=345;

        printf("roll_no %d marks %d\n",stob.roll_no,stob.marks);

        const struct data stob1={2345,346};
//        stob1={2345,346}; //error
//        stob1.ID=346;     //error
        printf("roll_no %d marks %d\n",stob1.roll_no,stob1.marks);
        return 0;
}
