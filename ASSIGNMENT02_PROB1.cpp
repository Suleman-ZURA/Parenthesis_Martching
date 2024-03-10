#include <iostream>
#include <stack>
//DSA ASSIGNMENT 02 Problem 1


void parenthesesMatching(std::string& expression)
{
	std::stack<char> braces;

	for (char ch : expression)
	{
		if (ch == '(' || ch == '[' || ch == '{')
		{
			braces.push(ch);
		}
		else if (!braces.empty())
		{
			if (ch == ')' && braces.top() == '(' || ch == ']' && braces.top() == '[' || ch == '}' && braces.top() == '{')
			{
				braces.pop();
			}
		}

	}
	if (braces.empty())
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
}

int main()
{
	std::string exp[] = { "(({}[]))","{[()]}","({[}])","(()" };

	parenthesesMatching(exp[0]);
	parenthesesMatching(exp[1]);
	parenthesesMatching(exp[2]);
	parenthesesMatching(exp[3]);
}

