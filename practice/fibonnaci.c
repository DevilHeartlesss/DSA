#include<stdio.h>
int fib(int n){
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return  fib(n-1)+fib(n-2);}
void main()
{
    int num,j,sum=0;
    printf("Enter teh value of n");
scanf("%d",&num);
printf("Fibonacci series is: ");
for(int i=1;i<=num;i++){
    int j =fib(i);
     sum=sum+j;
    printf("%d\t ",j);
   
}
printf("sum=%d",sum);
}
