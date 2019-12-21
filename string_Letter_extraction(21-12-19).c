#include<stdio.h>
int main()
{
    int a,n=0,i,j;
    char name[100];
    printf("Enter Name: ");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c ---> %d\n",name[i],i);
        n++;
    }
    printf("letters: %d \n",n);
    return 0;
}
