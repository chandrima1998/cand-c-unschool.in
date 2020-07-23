#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is:%d\n",a,b,a+b);
    printf("difference of %d and %d is:%d\n",a,b,a-b);
    printf("product of %d and %d is:%d\n",a,b,a*b);
    printf("division of %d and %d is:%f\n",a,b,a/b);
    printf("modulo of %d and %d is:%d\n",a,b,a%b);
    return 0;
}
