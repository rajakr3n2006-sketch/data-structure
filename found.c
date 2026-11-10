#include<stdio.h>
int main()
{
    int a[100],i,n,key;
   int found=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the element search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
     if(a[i]==key){
        printf("element not found at position%d\n",i+1);
        found=1;
        break;
     }   
    }
    if(!found){
        printf("element not found\n");
    }
    return 0;
}