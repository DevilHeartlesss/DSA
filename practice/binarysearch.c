#include<stdio.h>
void main()
{
    int a[10],search,first,middle,last,n,i;
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the element in array\n:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n:");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
   
  while(first<=last)
  {
    if(a[middle]<search){
        first=middle+1;
        middle=(first+last)/2;
    }
    else if(a[middle]==search)
    {
        printf("The Search Element %d found at %d",search,middle+1);
        break;
    }
    else{
        last=middle-1;
        middle=(first+last)/2;

    }
  }
  if(first>last){
    printf("The Search Element %d not found",search);
  }

}