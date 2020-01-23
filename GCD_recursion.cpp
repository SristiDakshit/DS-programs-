
#include<stdio.h>
int gcd(int a, int b)
{
if(a==0)
return b;
else 
return (b,a%b);
}
int main()
{
int a,b,GCD;
printf("enter the 1st number");
scanf("%d",&a);
printf("enter the 2nd number");
scanf("%d",&b);
GCD=gcd(a,b);
printf("the gcd of a number =%d",GCD);
}


