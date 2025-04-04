#include <stdio.h>
void swap(int* a, int* b,int* c)
{
    int t1,t2;
    t1 = *a;
    *a = *c;
    *c = t1;
    t2 = *c;
    *c = *b;
    *b = t2;
 }

void main()
{
    int x,y,z;
    printf("Enter value for a,b,c respectively:\n");
    scanf("%d%d%d",&x,&y,&z);
    printf(" Before swapping = a:%d, b:%d, c:%d\n", x,y,z);
    swap(&x, &y,&z);
    printf(" After swapping = a:%d, b:%d, c:%d\n", x,y,z);

}