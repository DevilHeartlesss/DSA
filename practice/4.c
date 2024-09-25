
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,i,*ptr,sum=0;
     printf("Enter the number of elemnts");
     scanf("%d",&n);
     ptr=(int*)malloc(n*sizeof(int));
     if(ptr==NULL)
     {
        printf("Error Memory not allocated");
        exit(06);

     }
     printf("enter elements");
     for(i=0;i<n;++i)
{
    scanf("%d",&ptr[i]);
    sum+=*(ptr+i);

}
printf("Sum=%d",sum);
free(ptr);

}