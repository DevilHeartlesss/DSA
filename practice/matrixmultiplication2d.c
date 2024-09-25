#include<stdio.h>
void main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
    printf("\nEnter Elements of matrix 1: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
printf("\n Matrix 1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat1[i][j]);
    }printf("\n");}

    printf("\nEnter Elements of matrix 2\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
printf("\n Matrix 2 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat2[i][j]);
    }
    printf("\n");}

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mat3[i][j]=0;
            for(k=0;k<3;k++)
            {
                mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("Matrix Multiplication is:\n");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {
        printf("%d\t",mat3[i][j]);
    }
printf("\n");
    }
}