#include<iostream>
using namespace std;
class node{
	
public:
	int data;
	node *next;
	
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
		
};
void insertAtHead(node **head, int x)
{
	if(*head == NULL)
	{
		*head = new node(x);
		return;
	}
	node *n = new node(x);
	n->next = *head;
	*head = n;
}

void printList(node *head)
{
	while(head !=NULL)
	{
		cout<<head->data<<"->";
		head = head->next;		
	}
}

int main()
{
	node *head = NULL;
	insertAtHead(&head,4);
	insertAtHead(&head,8);
	insertAtHead(&head,12);
	insertAtHead(&head,16);
	
	printList(head);
	return 0;
}
