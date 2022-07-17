//Author Name: Al-Fareed
//Reg No: 210970049
// Date of Creation:23-03-2022
// Program Name: Program to Conver a Infix Expression into Prefix Expression
#include <iostream>
#include <cstring>
using namespace std;
void evaluate();
char pop();
void push(char);
int prec(char);
char infix[30], postfix[30], stack[30];
int top = -1;
int main()
{
	int i,j,temp;
	cout << "\n Enter the Infix Expression:\n";
	cin >> infix;
	int num= strlen(infix);
	for ( i = 0,j = num - 1; i < num/2; i++, j--)  
    {     
        temp = infix[i];  
        infix[i] = infix[j];  
        infix[j] = temp;  
    }  
	evaluate();
	cout << "\n Prefix expression is:\n";
	cout << postfix << endl;
	return 0;
}
void evaluate()
{
	int i = 0, j = 0;
	char sy, temp;
	push('#');
	for (int i = 0; infix[i] != '\0'; i++)
	{
		sy = infix[i];
		switch (sy)
		{
		case ')':
			push(sy);
			break;
		case '(':
			temp = pop();
			while (temp != ')')
			{
				postfix[j] = temp;
				j++;
				temp = pop();
			}
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
			while (prec(stack[top]) > prec(sy))
			{
				temp = pop();
				postfix[j] = temp;
				j++;
			}
			push(sy);
			break;
		default:
			postfix[j] = sy;
			j++;
		}
	}
	while (top > 0)
	{
		temp = pop();
		postfix[j] = temp;
		j++;
	}
	postfix[j] = '\0';
	int num= strlen(postfix);
	for ( i = 0,j = num - 1; i < num/2; i++, j--)  
    {     
        temp = postfix[i];  
        postfix[i] = postfix[j];  
        postfix[j] = temp;  
    }  

}
void push(char item)
{
	top = top + 1;
	stack[top] = item;
}
char pop()
{
	char item;
	item = stack[top];
	top = top - 1;
	return item;
}
int prec(char sy)
{
	int p;
	switch (sy)
	{
	case '#':
		p = -1;
		break;
	case '(':
	case ')':
		p = 0;
		break;
	case '+':
	case '-':
		p = 1;
		break;
	case '*':
	case '/':
	case '%':
		p = 2;
		break;
	case '^':
		p = 3;
		break;
	}
	return p;
}
