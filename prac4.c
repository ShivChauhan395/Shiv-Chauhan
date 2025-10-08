#include<stdio.h>
void main()
{
int n, i, rev=0, b;
printf("Enter your number");
scanf("%d",&n);
for(i=n;i!=0;i=i/10)
{
b=i%10;
rev=rev*10+b;
}
if(rev==n)
{
printf("This number is palindrome: %d",n);
}
else
{
printf
("This number is not palindrome : %d",n);
}
}
