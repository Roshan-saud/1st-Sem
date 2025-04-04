#include<stdio.h>
void main()
{
    int M,N,i,j,O,P;
    printf("Enter the row and column for 1st matrix:\n");
    scanf("%d%d",&M,&N);
    printf("Enter the row and column for 2nd matrix:\n");
    scanf("%d%d",&O,&P);
    int M1[M][N],M2[O][P],sum[M][N],diff[M][N];
    if(M==O &&N==P)
    {
    printf("Enter %d numbers:\n",M*N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }
     printf("Enter %d numbers:\n",O*P);
    for(i=0;i<O;i++)
    {
        for(j=0;j<P;j++)
        {
            scanf("%d",&M2[i][j]);
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            sum[i][j]= M1[i][j]+M2[i][j];
            diff[i][j]= M1[i][j]-M2[i][j];
        }
    }
    printf("Sum of 2 matrix:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("Difference of 2 matrix:\n");
      for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Matrix can't be Add or subtract!");
    }
    
}