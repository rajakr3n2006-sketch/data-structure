#include<stdio.h>
int main()
{
    int n,digit,temp,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        digit=n%10;
        sum+=digit*digit*digit;
        n=n/10;
        if(sum=temp)
        printf("armstrong no");
        else
        printf("not armstrong no");
        return 0;
    }
}
