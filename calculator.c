#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,ch;
    printf("enter the value of a,b\n");
    scanf("%d%d",&a,&b);
    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for modulas\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:c=a+b;
        printf("sum=%d",c);
        break;
        case 2:c=a-b;
        printf("substract=%d",c);
        break;
        case 3:c=a*b;
        printf("product=%d",c);
        break;
        case 4:c=a/b;
        printf("quotient=%d",c);
        break;
        case 5:c=a%b;
        printf("remainder=%d",c);
        break;
        default:printf("wrong choice");
        exit(0);
    }
}
    