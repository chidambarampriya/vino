#include<stdio.h>
int main()
{
int i,n=10,m=20;
printf("Enter the number of values");
for(i=n;i<=m;i++)
{
if(i%n==0)
printf("The number is even ");
else
printf("The number is not even");
}
}
