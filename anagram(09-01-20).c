#include<stdio.h>
int main()
{
    char a[10],b[10],c[10];
    int i,j,k,t=0;
    printf("Enter word: ");
    gets(a);
    for(i=0;i<=3;i++)
    {
        printf("%c",a[i]);
        for(j=1;j<=3;j++)
        {

            printf("%c",a[j]);
        }
        printf("\n");
    }
    return 0;

}
