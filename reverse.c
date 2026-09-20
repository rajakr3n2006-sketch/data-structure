#include<stdio.h>
#include<string.h>
void reversestring(char str[]){
    int i;
    int length=strlen(str);
    printf("reversed string: ");
    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);
    reversestring(str);
    return 0;

}