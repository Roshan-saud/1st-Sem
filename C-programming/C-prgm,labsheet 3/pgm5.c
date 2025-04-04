#include<stdio.h>
void main()
{
    int a[10][10],m,n,i,j,b=0,c=0;
    printf("Enter row and column of square matrix:\n");
    scanf("%d%d",&m,&n);
    if(m==n)
    {
     printf("Enter %d numbers:\n",m*n);
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
       for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b = a[i][j]*a[i][j];
                c = c+b;
            }
        }
     }
       printf("The sum is %d",c);
    }
    else{
        printf("Give equall number of row and column");
    }
  
}