#include<stdio.h>
void main()
{
   int a[100],i,n,item,flag=0;
   printf("Enter the number of elements in the array:");
   scanf("%d",&n);
   printf("Enter the elements of the array:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("Enter the element to be searched:");
   scanf("%d",&item);
   for(i=0;i<n;i++){
    if(a[i]==item){
        flag=1;
        break;
    }
   }
   if (flag==1){
    printf("searcch is sucessful and location is :%d",i+1);}
    else {printf("search was unsucessful");
    }
   
}