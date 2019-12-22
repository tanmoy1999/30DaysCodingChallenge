
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]="Tanmoy",s2[100]="Munshi",n1,n2,s3[100],i=0,j=0,k=0;
    j=0;
    while(s1[i]!='\0')
    {
        s3[j]=s1[i];
        j++;
        i++;
    }
    printf("%d",j);
    i=0;
    while(s2[i]!='\0')
    {
        s3[j]=s2[i];
        j++;
        i++;
    }
    s3[j]='\0';
    printf("%s",s3);
    return 0;
}
