#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(num%2!=0)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }
    return 0;
}
