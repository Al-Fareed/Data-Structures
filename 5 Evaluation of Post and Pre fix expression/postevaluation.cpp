//Author Name: Al-Fareed
//Reg No: 210970049
//Program Name: Program to perform postfix evaluation
//---------------------------------------------------------------
#include<iostream>
#include<cstring>
using namespace std;
float pop(int &top, float stack[])
{
        float ele=stack[top];
        top--;
        return ele;
}
void push(float ch, int &top, float stack[], int &flag)
{
        if(flag==1)
        {
                float x=pop(top,stack);
                top++;
                stack[top]=ch + 10 * x;
        }
        else if(flag==0)
        {
                        top++;
                        stack[top]=ch;
                        flag=1;
        }

}

int main()
{
        int i,top=-1,flag=0;
        float ch,stack[50],op1,op2;
    string postfix;
        cout<<"\nEnter the postfix expression(enter space after each character): ";
        getline(cin,postfix);
        for(i=0;postfix[i]!='\0';i++)
        {
                if(isdigit(postfix[i]))
                {
                        ch=postfix[i]-'0';
                        push(ch,top,stack,flag);
                }
                else if(postfix[i]==' ')
                        flag=0;
                else
                {
                        op2=pop(top,stack);
                        op1=pop(top,stack);
                        switch(postfix[i])
                        {
                                case '+':       ch=op1+op2;
                                                        push(ch,top,stack,flag);
                                                        break;
                                case '-':ch=op1-op2;
                                                        push(ch,top,stack,flag);
                                                        break;
                                case '*': ch=op1*op2;
                                                        push(ch,top,stack,flag);
                                                        break;
                                case '/': ch=op1/op2;
                                                        push(ch,top,stack,flag);
                                                        break;

                        }
                }
        }

        cout<<"\nResult of evaluation: "<<pop(top,stack)<<"\n";
}
