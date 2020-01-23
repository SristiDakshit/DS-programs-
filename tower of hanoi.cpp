#include<stdio.h>
void tower(int,int,int,int);
int main()
{
    int n;

    printf("\nEnter no. of discs: ");
    scanf("%d",&n);

    printf("Moves:\n");

    tower(n,1,2,3);

    return 0;
}

void tower(int n,int fr,int to,int spr)
{
    if(n==1)
    {
        printf("Move from %d to %d\n",fr,to);
        return;
    }
    else
    {
        tower(n-1,fr,spr,to);
        tower(1,fr,to,spr);
        tower(n-1,spr,to,fr);
    }
}

