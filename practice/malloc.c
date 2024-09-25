#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*ptr,sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    // ptr=(int*)malloc(n*sizeof(int));
    ptr=(int*) calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("sum=%d",sum);
}