#include <iostream>
using namespace std;
void push(char &sy, int &top, char stack[])
{
	top = top + 1;
	stack[top] = sy;
}
char pop(char stack[], int &top)
{
	char sy;
	sy = stack[top];
	top = top - 1;
	return sy;
}
int prec(char &sy)
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
int main()
{
	char infix[30], postfix[30], stack[30];
	int top = -1;
	int i = 0, j = 0;
	char sy, temp, para = '(';
	cout << "\n Enter the Infix Expression:\n";
	cin >> infix;
	push(para, top, stack);
	for (int i = 0; infix[i] != '\0'; i++)
	{
		sy = infix[i];
		switch (sy)
		{
		case '(':
			push(sy, top, stack);
			break;
		case ')':
			temp = pop(stack, top);
			while (temp != '(')
			{
				postfix[j] = temp;
				j++;
				temp = pop(stack, top);
			}
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
			while (prec(stack[top]) >= prec(sy))
			{
				temp = pop(stack, top);
				postfix[j] = temp;
				j++;
			}
			push(sy, top, stack);
			break;
		default:
			postfix[j] = sy;
			j++;
		}
	}
	while (top > 0)
	{
		temp = pop(stack, top);
		postfix[j] = temp;
		j++;
	}
	postfix[j] = '\0';
	cout << "\n Postfix expression is:\n";
	cout << postfix << endl;
	return 0;
}
