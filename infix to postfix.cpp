#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 50

typedef struct STACK
{
    int top;
    char st[MAX];
}stack;

stack stk;

void push(char);
char pop(void);
void infix_postfix(char[],char[]);
int getpriority(char);

int main()
{
    char s[MAX],t[MAX];int i;
    stk.top=-1;

    printf("Enter an infix expression: ");
    scanf(" %[^\n]",s);

    for(i=0;s[i]!='\0';i++);
    s[i++]=')';s[i]='\0';
    push('(');

    infix_postfix(s,t);

    printf("\nPostfix expression: %s\n\n",t);

    return 0;
}

void infix_postfix(char s[],char t[])
{
    int i,j=0;

    for(i=0;s[i]!='\0';i++)
    {
	if(s[i]=='(')
	    push(s[i]);
	else if(isdigit(s[i])||isalpha(s[i]))
            t[j++]=s[i];
	else if(s[i]==')')
	{
	    while(stk.st[stk.top]!='(')
		t[j++]=pop();
	    pop();
        }
	else 
	{
	    while(stk.st[stk.top]!='(' && getpriority(stk.st[stk.top]) >= getpriority(s[i]))
	        t[j++]=pop();
	    push(s[i]);
	}
    }

    t[j]='\0';

    return;
}

int getpriority(char a)
{
    if(a=='^') 
        return 3;
    if(a=='*'||a=='/'||a=='%')
	return 2;
    if(a=='+'||a=='-')
	return 1;
}

void push(char c)
{
    stk.top=stk.top+1;

    stk.st[stk.top]=c;
}

char pop(void)
{
    if(stk.top==-1)
    {
	printf("\n\nUNDERFLOW\n\n");
	exit(0);
    }

    char temp=stk.st[stk.top];

    stk.top=stk.top-1;

    return temp;
}


