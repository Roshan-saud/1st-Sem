#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	FILE *f1, *f2; 
	char fn[100], c; 
	printf("Enter the filename to read: "); 
	scanf("%s", fn); 
	f1 = fopen(fn, "r"); 
	if (f1 == NULL) 
	{ 
		printf("Cannot open file %s \n", fn); 
		exit(0); 
	} 

	printf("Enter the filename to write \n"); 
	scanf("%s", fn); 

	f2 = fopen(fn, "w"); 
	if (f2 == NULL) 
	{ 
		printf("Cannot open file %s \n", fn); 
		exit(0); 
	} 
	c = fgetc(f1); 
	while (c != EOF) 
	{ 
		fputc(c, f2); 
		c = fgetc(f1); 
	} 
	printf("\nContents copied "); 
	fclose(f1); 
	fclose(f2); 
	return 0; 
}
