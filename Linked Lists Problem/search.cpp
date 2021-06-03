#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class node
{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

void append(node **head, int x)
{
	node * new_node = new node(x);
	node *temp = *head;
	//new_node->data = x;
	//new_node->next = NULL;
	cout<<"inserted"<<endl;
	if(*head == NULL)
	{
		*head = new_node;
		return;
	}
	while(temp->next !=NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	
	return;
}

void display(node *head)
{
	
	for(node *temp = head; temp != NULL; temp = temp->next)
	{
		cout<<temp->data<<"->";
	}
	
}
bool isPresent(node * head, int key)
{
    while(head != NULL)
    {
    	if(head->data == key)
    	{
    		return true;
		}
		head = head->next;
	}
	return false;
}
int main()
{
	node *head = NULL;
	int n,val;
	cout<<"enter the length of linked list";
	cin>>n;
	
	cout<<"enter the values";
	for(int i=0;i<n;i++)
	{
		cin>>val;
		append(&head,val);
	}
	
	display(head);
	
	int key;
	cout<<"enter a element to be searched";
	cin>>key;
	
	if(isPresent(head, key))
		cout<<"found";
	else cout<<"not found";
	return 0;
}
