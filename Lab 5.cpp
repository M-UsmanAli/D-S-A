#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node*next;
	
};
struct Node*head;
void insert(int x){
	struct Node*temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct Node*temp=head;
	cout<<"list is"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
		
	}
	cout<<endl;
}
void Delete(int n){
	int temp;
	struct Node* temp1= head;
	if(n==1){
		head=temp1->next;
		free(temp1);
		return;
	}
	int i; 
	for(i=0;i<n-1;i++){
		temp1=temp1->next;
		struct Node* temp2=temp1->next;
	
		temp1->next=temp2->next;
		free(temp2);
	}
}
int main(){
	head=NULL;
	cout<<"how many numbers"<<endl;
	int n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the number"<<endl;
		cin>>x;
		insert(x);
		print();	}	
		cout<<"enter no u want to delete"<<endl;
		cin>>y;
		Delete(y);
		print();
	
}
