
/*normal Structure program*/

#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks[5];
};
main()
{
    struct student stu;
    int i;
    printf("Enter name of the student: ");
    scanf("%s",&stu.name);
    printf("Enter the student Roll no.: ");
    scanf("%d",&stu.roll);
    printf("enter the marks of the subjects\n");
    printf("English: ");
    scanf("%5f",&stu.marks[0]);
    printf("Hindi: ");
    scanf("%5f",&stu.marks[1]);
    printf("Maths: ");
    scanf("%5f",&stu.marks[2]);
    printf("Science: ");
    scanf("%5f",&stu.marks[3]);
    printf("Social Science: ");
    scanf("%5f",&stu.marks[4]);
    printf("\n\n");
    printf("Student Name: %s\n",stu.name);
    printf("Student Roll: %d\n\n",stu.roll);
    printf("Marks\n");
    printf("English: %f\nHindi: %f\nMaths: %f\nScience: %f\nSocial Science: %f\n",stu.marks[0],stu.marks[1],stu.marks[2],stu.marks[3],stu.marks[4]);
    printf("\n\n");
}

/*Pointer Based stucture*/


#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks[5];
};
main()
{
    struct student stu;
    struct student *p;
    p=&stu;
    int i;
    printf("Enter name of the student: ");
    scanf("%s",p->name);
    //printf("name: %s",(*p).name);
    printf("Enter the student Roll no.: ");
    scanf("%d",&p->roll);
    printf("enter the marks of the subjects\n");
    printf("English: ");
    scanf("%5f",&p->marks[0]);
    printf("Hindi: ");
    scanf("%5f",&p->marks[1]);
    printf("Maths: ");
    scanf("%5f",&p->marks[2]);
    printf("Science: ");
    scanf("%5f",&p->marks[3]);
    printf("Social Science: ");
    scanf("%5f",&p->marks[4]);
    printf("******************************************\n\n");
    printf("Student Name: %s\n",(*p).name);
    printf("Student Roll: %d\n\n",(*p).roll);
    printf("Marks\n");
    printf("English: %f\nHindi: %f\nMaths: %f\nScience: %f\nSocial Science: %f\n",(*p).marks[0],(*p).marks[1],(*p).marks[2],(*p).marks[3],(*p).marks[4]);
    printf("\n\n");
}

