#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x:\n");
    scanf("%d",&x);
    printf("%d\n",++x);
    printf("%d\n",--x);
    printf("%d\n",x++);
    printf("%d\n",x--);
    return 0;
}