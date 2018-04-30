#include<iostream>
using namespace std;
int main()
{
	int a[10],b=0,c;
	int d=0,co=0,n;
	loop:
	{
	cout<<"main menu"<<endl;
	cout<<"1: Enter element in the array \n";
	cout<<"2: for traverse the array \n";
	cin>>n;
	switch(n)
	{
		case'1':
			{
			cout<<"Enter the array less then 10: ";
			cin>>c;
			cout<<"Enetr the element in the array: "<<endl;
			while(b<c)
			{
				co++;
				cin>>a[b];
				b++;
			}
			}
		break;
		case'2':
			{
			cout<<"The traverse of array is: "<<endl;
			b=d;
			while(b<c)
			{
				cout<<a[b]<<" ";
				b++;
			}
			}
			break;
	}
}
		goto loop;
		return 0;
		
}
