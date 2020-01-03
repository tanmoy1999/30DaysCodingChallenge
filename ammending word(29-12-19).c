#include<stdio.h>
//#include<string.h>
int main()
{
    char sou[100],des[100];
    int n,k,i=0,l,j=0;
    printf("Enter word: ");
    gets(sou);
    printf("Enter letter you want to ammend: ");
    gets(des);
    while(des[i]!='\0')
    {
        //printf("%c ",b[i]);
        i++;

    }
    des[i]=' ';
    i++;
    printf("%d\n",i);
    while(sou[j]!='\0')
    {
        des[i]=sou[j];
        i++;
        j++;
    }
    //printf("%s\n",j);
    des[i]='\0';
    puts(des);

    return 0;
}
