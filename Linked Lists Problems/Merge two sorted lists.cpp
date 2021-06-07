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
node *merge(node *a, node *b)
{
	if( a == NULL)
		return b;
	if( b == NULL)
		return a;
	node *c = NULL;
	if(a->data < b->data)
	{
		c =a;
		c->next = merge(a->next,b);
	}
	else 
	{
		c =b;
		c->next = merge(a,b->next);
	}
	return c;
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


int main()
{
	node *a = NULL;
	node *b = NULL;
	insertAtEnd(&a, 2);
	insertAtEnd(&a, 4);
	insertAtEnd(&a, 6);
	insertAtEnd(&a, 8);
	insertAtEnd(&a, 10);
	printList(a);
	
	insertAtEnd(&b, 1);
	insertAtEnd(&b, 3);
	insertAtEnd(&b, 5);
	insertAtEnd(&b, 7);
	insertAtEnd(&b, 9);
	printList(b);
	
	node *m = merge(a,b);
	printList(m);
	return 0;	
}
