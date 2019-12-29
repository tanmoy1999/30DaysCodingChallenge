/*#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,j,k,i,n1;
    char s1[10],s2[10],s3[10];
    printf("Enter name: ");
    gets(s1);
    n1=strlen(s1);
    //printf("%d",n1);
    for(i=0;i<=n1-1;i++)
    {
        printf("s1[%d]=%c\n",i,s1[i]);
        s3[j]=s1[i];
        j++;
    }
    for(i=n1-1;i>=0;i--)
    {
        //printf("s2[%d]=%c\n",i,s2[i]);
        s2[i]=s1[i];
    }
    for(i=0;i<=n1-1;i++)
    {
        if(s2[i]==s3[i])
        {
            printf("\nPalindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }

    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10],s3[10];
    int i,j=0,n,k,l;
    printf("Enter a word: ");
    gets(s1);
    l=strlen(s1);
    //printf("%d",l);
    for(i=0;i<l;i++)
    {
        s2[i]=s1[i];
    }
    for(i=l-1,j=0;i>=0,j<l;i--,j++)
    {
        s3[j]=s2[i];

    }
    for(j=0;j<l;j++)
    {
        if(s2[j]==s3[j])
        {
            printf("Palindrome\n");
        }
        else
        {
            printf("Not Palindrome\n");
        }

    }

    /*for(i=l,j=0;i>0,j<l;i--,j++)
    {
        s3[j]=s2[l];
    }*/


    return 0;

}





