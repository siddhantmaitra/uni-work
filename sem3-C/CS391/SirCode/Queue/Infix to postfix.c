#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char infix[1000],postfix[1000],stack[1000];
int top=-1,p=0;

int precedence(char ch)
{
    switch(ch)
    {
        case '#':   return -1;
                    break;
        case '(':   return 0;
                    break;
        case '+':
        case '-':   return 1;
                    break;
        case '*':
        case '/':
        case '%':   return 2;
                    break;
        case '^':   return 3;
                    break;
    }
}

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    if(top<=0)
    {
        printf("Stack is empty\n");
        getch();
        exit(0);
    }
    else
    {
        return stack[top--];
    }
}
void InfixToPostfix()
{
    int i,len = strlen(infix);
    infix[len] = '#';
    top++;
    stack[top] = '#';
    char ch;
    for(i=0;infix[i]!='#';i++)
    {
        switch(infix[i])
        {
            case '(':   push(infix[i]);
                        break;
            case ')':   while((ch = pop())!='(')
                        {
                            postfix[p++] = ch;
                        }
                        break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
            case '^':   while(precedence(stack[top])>=precedence(infix[i]) && stack[top]!='#')
                        {
                            postfix[p++] = pop();
                        }
                        push(infix[i]);
                        break;
            default:    postfix[p++] = infix[i];
        }
    }
    while(stack[top]!='#')
    {
        postfix[p++] = pop();
    }
    postfix[p] = '\0';
}


int EvaluatePostfix()
{
    //top=0;
    char ch;int i;
    int c=0,a=0,b=0;
    int len = strlen(postfix);
    postfix[len] = '#';
    for(i=0;postfix[i]!='#';i++)
    {
        if(postfix[i]>='0' && postfix[i]<='9')
        {
           push(postfix[i] - 48);
        }
        else
        {
            a = pop();
            //int a = ch - '0';
            b = pop();
            //int b = ch - '0';
            switch(postfix[i])
            {
                case '+':   c = b + a;
                            break;
                case '-':   c = b - a;
                            break;
                case '*':   c = b * a;
                            break;
                case '/':   if(a==0)
                                c = 0;
                            else
                                c = b / a;
                            break;
                case '%':   c = b % a;
                            break;
                case '^':   c = b ^ a;
                            break;
            }
            push(c);
        }
    }
    return (stack[top]);
}
int main()
{
    printf("Enter infix expression : ");
    scanf("%s",infix);
    InfixToPostfix();
    printf("Postfix expression is : %s\n",postfix);
    printf("Postfix result is : %d",EvaluatePostfix());
}
