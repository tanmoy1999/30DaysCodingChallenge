//ARMSTRONG NUMBER

/*#include<stdio.h>
int main()
{
    int rem,num,sum=0,n,i,temp;
    printf("enter the three digit number: ");
    scanf("%d",&num);
    temp = num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num = num/10;
    }
    printf("%d \n",sum);
    if(temp==sum)
    {
        printf("its armstrong number");
    }
    else
    {
        printf("its not");
    }
    return 0;
}*/


#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],a,name2[20];
    int i,n,len;
    printf("enter a word: ");
    gets(name);
    len = strlen(name);
    printf("length of string: %d\n",len);
    for(i=0;i<=len;i++)
    {
        a = name[i];
        printf("%c \n",a);
    }
    printf("---------------------- \n");
    for(i=len;i>=0;i--)
    {
        name2[i] = name[i];
    }
    for(i=len;i>=0;i--)
    {
        printf("%c",name2[i]);
    }
    return 0;
}
