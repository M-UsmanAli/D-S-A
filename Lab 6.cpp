#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Node{
 int data;
 Node* next;
 Node* pre;
};

struct Node* head;
Node* getNewNode(int item){
	Node* newNode = (Node*)malloc(sizeof(Node));
	(*newNode).data = item;
	(*newNode).pre = NULL;
	(*newNode).next = NULL;
	return newNode;
}
void add(Node* newNode)
{
	struct Node* temp=(Node*)malloc(sizeof(struct Node));
	temp=head;
	head=newNode;
	newNode->pre=NULL;
	newNode->next=temp;
	return ;
	
}
void display(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode = head;
	cout<<"\n\nData in the list\n\n";
	while(newNode != NULL){
		cout<<newNode -> data<<" ";
		newNode = newNode -> next;
	}
	cout<<"\n\nPress any key to continue..";
	getch();
	return;
	}

int main(){
	int choice, item;
	Node* newNode;
	up:
		
	
	cout<<"Press 1 to Insert Data"<<endl;
	cout<<"Press 2 to Display Data\n"<<endl;
	cin>>choice;
	if(choice == 1){
		cout<<"Enter data: "<<endl;
		cin>>item;
		newNode = getNewNode(item);
		add(newNode);
		goto up;
	}
	else if(choice == 2){
		display();
		goto up;
	}
	else{
		cout<<"\n\nPress any key to continue..";
		goto up;
	}
	return 0;
}

