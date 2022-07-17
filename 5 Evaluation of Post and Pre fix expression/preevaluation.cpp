//Author Name: Al-Fareed
//Reg No: 210970049
//Program Name: Program To perform Prefix evaluation
////---------------------------------------------------------------
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
                stack[top]=x + 10 * ch;
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
        string prefix;
        int i,top=-1,flag=0;
        float ch,stack[50],op1,op2;
        cout<<"\nEnter the prefix expression(enter space after each character): ";
        getline(cin,prefix);
        int len=prefix.length();
        for(i=len-1;i>=0;i--)
        {
                if(isdigit(prefix[i]))
                {
                        ch=prefix[i]-'0';
                        push(ch,top,stack,flag);
                }
                else if(prefix[i]==' ')
                        flag=0;
                else
                {
                        op1=pop(top,stack);
                        op2=pop(top,stack);
                        switch(prefix[i])
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

        cout<<"\nResult of prefix evaluation: "<<pop(top,stack)<<"\n";
}
