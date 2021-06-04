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
	node *temp;
	for(temp = *head; temp->next !=NULL; temp = temp->next);
	node * n = new node(x);
	n->next = temp->next;
	temp->next = n;
	return;
}

printList(node *head)
{
	while(head !=NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<endl;
}

node *midPoint(node *head)
{
	node *slow = head;
	node *fast = head->next;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
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

node *mergeSort(node *head)
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	
	node *mid = midPoint(head);
	node *a = head;
	node *b = mid->next;
	mid ->next = NULL;
	a = mergeSort(a);
	b = mergeSort(b);
	
	return merge(a,b);
}

int main()
{
	node *head =NULL;
	insertAtEnd(&head, 2);
	insertAtEnd(&head, 4);
	insertAtEnd(&head, 6);
	insertAtEnd(&head, 7);
	insertAtEnd(&head, 10);
	insertAtEnd(&head, 12);
	insertAtEnd(&head, 11);
	insertAtEnd(&head, 9);
	insertAtEnd(&head, 8);
	insertAtEnd(&head, 5);
	insertAtEnd(&head, 3);
	insertAtEnd(&head, 1);
	printList(head);
	
	node *m = mergeSort(head);
	printList(m);
	return 0;
}
