#include <stdio.h>

int main()
{
    printf("Enter two Numbers:\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Enter Choice:\n 1 for Add \n 2 for Subtract \n 3 for Multiply \n 4 for Divide\n ");
    int c;
    scanf("%d",&c);
    if(c==1)printf("Sum is:%d\n",a+b);
    if(c==2)printf("Diff is:%d",a-b);
    if(c==3)printf("Product is:%d",a*b);
    if(c==4)printf("Quotient is%d",a/b);
    return 0;
}
