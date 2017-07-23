#include<stdio.h>
int main()
{
int num,sum=0,temp,digit;
printf("Enter the number of values");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
digit=temp%10;
sum=digit*digit*digit;
temp=temp/10;
}
if(sum==num)
printf("The number is armstrong number");
else
printf("The number is not an armstrong number");
}
