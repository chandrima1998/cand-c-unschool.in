#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("sum of two numbers is:%d\n",a+b);
    printf("difference of two numbers is:%d\n",a-b);
    printf("product of two numbers is:%d\n",a*b);
    printf("division of two numbers is:%f\n",a/b);
    printf("modulo of two numbers is:%d\n",a%b);
    return 0;
}
