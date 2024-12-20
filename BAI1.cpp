#include <iostream>
using namespace std;
int top=-1;
bool Isfull(int capacity)
{
	if(top>=(capacity-1))
		return true;
	else
		return false;
}
bool Isempty()
{
	if(top==-1)
		return true;
	else
		return false;
}
void Push(char stack[],char value, int capacity)
{
	if(Isfull(capacity)==true)
		cout<<"\n Stack day";
	else
		{
			++top;
			stack[top]=value;	
		}	
}
void Pop()
{
	if(Isempty()==true)
		cout<<"\n Stack trong! Khong co gi de xoa";
	else
	{
		--top;
	}	
}
char Top(int stack[])
{
	return stack[top];
}
int Size()
{
	return top+1;
}
main()
{
	int capacity=4;
	char stack[capacity];
	Push (stack,1,4);
	Push (stack,2,4);
	Push (stack,3,4);
	Push (stack,4,4);
	
}

