#include<iostream>
using namespace std;
int stack[100],top=-1,n=100;
void push(int val)
{
	if(top>=n-1)
		cout<<"**********Stack Overflow**********"<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
		cout<<"**********Stack Underflow**********"<<endl;
	else
	{
		cout<<"Element is popped:-"<<stack[top]<<endl;
		top--;
	}	
}
void display()
{
	if(top>=0)
	{
		cout<<"Stack Elements are:-"<<endl;
		for(int i=top;i>=0;i--)
		{
			cout<<" "<<stack[i]<<endl;
		}
	}
	else
		cout<<"Stack is empty";	
}
int main()
{
	int ch,val;
	cout<<"1.Push Element\n2.Pop Element\n3.Display\n5.Display Top\n4.Exit"<<endl;
	do{
	cout<<"Enter Your Choice:-";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter Value to Insert:-"<<endl;
				cin>>val;
				push(val);
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 4: cout<<"Exit";
				break;
		case 5: cout<<"Top Element:-"<<stack[top];
				break;
		default: cout<<"Invalid Choice:-";
		
	}
	}while(ch!=4);
	return 0;	
}
