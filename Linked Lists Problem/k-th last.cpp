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

int kLast(node *head, int k)
{    
    if(head == NULL )
	{
		return head->data;
	}
	node *slow = head;
	node *fast = head;
	for(int i = 0; i < k; i++)
	{
		
		fast = fast->next;
	}
	while(fast != NULL)
	{
		cout<<fast->data<<" ";
		fast = fast->next;
		cout<<slow->data<<endl;
		slow = slow->next;
	}
	return slow->data;
}

int main()
{
	node *head =NULL;
	insertAtEnd(&head, 2);
	insertAtEnd(&head, 4);
	insertAtEnd(&head, 6);
	insertAtEnd(&head, 8);
	insertAtEnd(&head, 10);
	insertAtEnd(&head, 12);
	printList(head);
	
	int k;
	cout<<"enter k";
	cin>>k;
	cout<<"k-th element from last is: "<<kLast(head, k)<<endl;
	
	return 0;
	
}
