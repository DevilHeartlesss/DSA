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
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

    printf("selection Sorted Array is\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
}