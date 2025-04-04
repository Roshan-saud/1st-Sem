#include<stdio.h>
void main()
{
    int M,N,i,j;
    printf("Enter the row and column of matrix:\n");
    scanf("%d%d",&M,&N);
    int mt[M][N];
    printf("Enter %d numbers:\n",M*N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&mt[i][j]);
        }
    }
    printf("Matrix Normally:\n");
     for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",mt[i][j]);
        }
        printf("\n");
    }
     printf("\nMatrix After transpose:\n");
     for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d\t",mt[j][i]);
        }
        printf("\n");
    }
}