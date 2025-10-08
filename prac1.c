#include<stdio.h>
int gcd(int a, int b)
{
if (b == 0){
return a;
}
return gcd(b, a % b);
}
int main(){
int num1, num2;
printf("Enter your number : ");
scanf("%d",&num1);
printf("Enter your 2nd number : ");
scanf("%d",&num2);
printf("GCD of %d and %d is %d\n",num1, num2, gcd(num1, num2));
return 0;
}
