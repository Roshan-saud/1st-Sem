#include<stdio.h>
struct student
{
 char name[30];
 int roll;
 float marks;
};

void main()
{

 int i,j,n;
 printf("Enter number of student:\n");
 scanf("%d",&n);
 struct student s[n], hg,temp;
 for(i=0;i< n;i++)
 {
  printf("Enter name, roll and marks of student:\n");
  scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].marks);
 }
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       if(s[i].marks<s[j].marks)
  {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  } 
    }
    hg= s[i];
}
 printf("Detail of student with highest mark:\n");
 printf("Name: %s\n", hg.name);
 printf("Roll: %d\n", hg.roll);
 printf("Marks: %.2f\n", hg.marks);

}