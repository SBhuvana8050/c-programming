#include <stdio.h>
int main(void)
{

    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("%d is greater than %d\n",a,b);
    if(a>b);
    else if(a<b)
        printf("%d is less than %d\n",a,b);
        else
        printf("both numbers are equal.\n");
    return 0;

}
