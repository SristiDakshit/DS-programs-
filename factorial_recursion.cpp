#include<stdio.h>
int factorial(int,int);

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("\n%d! = %d\n\n",n,factorial(n,1));

    return 0;
}

int factorial(int n,int fact)
{
    if(n==0)
        return fact;
    else
        return factorial(n-1,fact*n);
}

