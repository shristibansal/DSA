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
	cout<<endl;
}
int decimalValue(node *head)
{
	int val = 0;
	while(head != NULL)
	{
		val = (val*2)+head->data;
		cout<<val<<endl;
		head=head->next;
		}
		return val;	
}
int main()
{
	node *head = NULL;

	insertAtHead(&head,0);
	insertAtHead(&head,1);
    insertAtHead(&head,0);
	insertAtHead(&head,0);
	insertAtHead(&head,1);
	insertAtHead(&head,1);
	insertAtHead(&head,0);
	printList(head);
cout<<"Decimal value "<<decimalValue(head)<<endl;
	return 0;
}
