#include<iostream>
using namespace std;
	int max=10;
	int a[10];
	int top=-1;
void push(int x)
	{
		if(top==10)
		{
			cout<<"Error:Over flow";
		}
		else
		{
			a[++top]=x;
		}
	}
void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty";
		}
		else
		{
			top--;
		}
	}
	int print()
	{
		for(int i=0;i<top+1;i++)
		{
			cout<<a[i];
		}
	}
int main()
{	
	us: cout<<"1. push"<<endl;
	cout<<"2. pop"<<endl;
	cout<<"3. print"<<endl;
	cout<<"***************"<<endl;
	char k,y;
	while(y==0)
	{
	cin>>k;
	switch(k)
	{
		case '1':
		int a;
		cin>>a;
		push(a);
		goto us;
		break;
		case '2':
		pop();
		goto us;
		break;
		case '3':
		print();
		break;
}
	}
}
