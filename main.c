#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum;
    printf("enter three numbers:\n");

    scanf("%d%d%d",&a,&b,&c);
    sum=(a+b+c);

    printf("sum of the three numbers is:%d",sum);
    return 0;
}
