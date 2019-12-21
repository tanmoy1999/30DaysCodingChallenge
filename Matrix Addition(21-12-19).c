
/*#include<stdio.h>
int main()
{
    int a[10][10],i,j,row,col,k,l;
    printf("Row: ");
    scanf("%d",&row);
    printf("Col: ");
    scanf("%d",&col);
    if(row==col)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    else
    {
        printf("Error");
    }
    printf("RESULT\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],row=2,col=2,i,j,k,l;
    printf("Enter Matrix 1: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Matrix 2: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("RESULT\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    return 0;
}
