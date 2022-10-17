
#include<stdio.h>
#define stacksize 10
#define psize 10
#include<ctype.h>
void evalpostfix(char []);
	int pop();
void push(int );
int stack[stacksize];
int top=-1;
int main()
{
	int i=0;
	char postfix[psize];
	printf("enter the expression");
	for(i=0;i<psize;i++)
	{
		scanf("%c",&postfix[i]);
		if(postfix[i]=='#')
		break;
		}
		 evalpostfix(postfix);
		return 0;
		}
	

void evalpostfix(char postfix[])
{   int i;
	char ch;
	int a,b,val;
	for(i=0;postfix[i]!='#';i++)
	{
		ch=postfix[i];
		if(isdigit(ch))
		push(ch-'0');
		else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
		{
			a=pop();
			b=pop();
			switch(ch)
			{
				case '+':val=b+a;
				        break;
				case '-':val=b-a;
				         break;	
				case '*':val=b*a;
                        break;
			     case '/':val=b/a;
				         break;
				case '^':val=b^a;
				        break;
				        }
				        }}
				        push(val);
				        }
void push(int item)
{if(top==stacksize-1)
	printf("stack is full");
	else{
		top=top+1;
		stack[top]=item;}
		}
		int pop()
		{int item;
			if(top==-1)
			printf("stack underflow");
			else{
				item=stack[top];
				top=top-1;
				return item;
				}
				}
