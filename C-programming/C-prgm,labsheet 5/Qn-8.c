#include<stdio.h>
struct student
{
 char name[100];
 int roll;
 float marks;
};

void main()
{

 int i,j,n;
 printf("Enter number of student:\n");
 scanf("%d",&n);
 struct student s[n], hg[n],temp;
 for(i=0;i< n;i++)
 {
  printf("Enter name, roll and marks of student:\n");
  scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].marks);
 }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       if(s[j].marks>s[j+1].marks)
  {
    temp = s[j];
    s[j] = s[j+1];
    s[j+1] = temp;
  } 
    }
 
}
printf("Detail of student in ascending order:\n");
for(i=0;i<n;i++)
{
 printf("Name: %s\n", s[i].name);
 printf("Roll: %d\n", s[i].roll);
 printf("Marks: %.2f\n",s[i].marks);
}

}