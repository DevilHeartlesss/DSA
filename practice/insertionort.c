#include<stdio.h>
void main()
{
    int a[100],n,i,j,temp;
    printf("Enter the element in array\n");
    scanf("%d",&n);
    printf("enter th element in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    

    printf("insertion Sorted Array is\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
}