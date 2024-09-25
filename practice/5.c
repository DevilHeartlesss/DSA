
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,i,*ptr,sum=0;
     printf("Enter the number of elemnts");
     scanf("%d",&n);
     p=(int*)malloc(n*sizeof(int));
     if(p==NULL)
     {
        printf("Error Memory not allocated");
        exit(0);

     }
     printf("enter elements");
     for(i=0;i<n;++i)
{
    scanf("%d",p+i);
    sum+=*(p+i);

}
printf("Sum=%d",sum);
p=(int*)realloc(p,4)
printf("Enter elements of array: ");
for(i=0;i<n;++i)
{
    scanf("%d",p+i); 
    s+=*(p+i);

}
printf("Sum=%d",sum);

free(ptr);

}