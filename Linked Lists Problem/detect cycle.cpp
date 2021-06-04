#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
		node(int data)
		{
			this->data = data;
			this->next = NULL;
		}
};

void insertAtEnd(node **head, int x)
{
	if(*head == NULL)
	{
		*head = new node(x);
		return;
	}
	
	node *temp = *head;
	for(temp = *head; temp->next != NULL; temp = temp->next);
	node *n = new node(x);
	temp->next = n;
}

void printList(node *head)
{
	while(head != NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<endl;
}

bool detectCycle(node *head)
{
	if(head == NULL)
	{
		return false;
	}
	
	node *fast = head->next;
	node *slow = head;
	while(fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if(slow->data == fast->data)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	node *a = NULL;
	node *b = NULL;
	insertAtEnd(&a, 1);
	insertAtEnd(&a, 2);
	insertAtEnd(&a, 3);
	insertAtEnd(&a, 4);
	insertAtEnd(&a, 5);
	insertAtEnd(&a, 6);
	insertAtEnd(&a, 7);
	insertAtEnd(&a, 8);
	
	printList(a);
	
	node *temp;
	for(temp = a; temp->next != NULL; temp = temp->next);
	temp->next = a->next->next;
	
	if(detectCycle(a))
	{
		cout<<"List contains a cycle";
	}
	else
	{
		cout<<"List does not contain any cycle";
	}
	
	return 0;	
}
