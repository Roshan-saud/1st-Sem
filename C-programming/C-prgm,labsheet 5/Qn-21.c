/*  Write a program to create a file named student.txt and write name, roll, address, and marks 
of a student to this file. */
#include <stdio.h>
#include<stdlib.h>
void main() {
	char name[50],ad[30];
	int marks,i,n,rl;
    FILE *fptr;
	fptr=fopen("student.txt","w");
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
    printf("Enter name of student: ");
	scanf("%s",name);
    printf("Enter roll number of student: ");
    scanf("%d",&rl);
    printf("Enter address of student: ");
    scanf("%s",ad);
	printf("Enter marks: ");
	scanf("%d",&marks);
	fprintf(fptr,"\nName: %s \t Rollno=%d\n address:%s \t mark=%d ",name,rl,ad,marks);
	fclose(fptr);
	printf("Date written sucessfully.");
    }