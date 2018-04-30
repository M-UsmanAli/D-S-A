#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int x=-1,y=0;
	int arr[10];
	char op;
	cout<<"press 1 to push"<<endl;
	cout<<"press 2 to delete"<<endl;
	cout<<"press 3 to display"<<endl;
	cout<<"press 4 to exit"<<endl;
	line:
		cin>>op;
		switch(op){
			case'1':
				cout<<"enter no. to push"<<endl;
				x++;
				cin>>arr[x];
				cout<<"Pushed at "<<x<<endl;
				break;
			case'2':
				cout<<"deleting"<<endl;
				y++;
				break;
			case'3':
				for(int i=0;i<=x;i++)
				{
					cout<<arr[i]<<endl;
				}
				break;
			case'4':
				exit;
		}
		goto line;
}
