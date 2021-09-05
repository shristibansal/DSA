#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node* right;
};
void printLevelOrder(node* root)
{
	if(root ==NULL)
	return ;
	queue<node *>q;
	q.push(root);
	while(q.empty()==false)
	{
		node* n=q.front();
		cout<<n->data<<endl;
		if(n->left!=NULL)
		q.push(n->left);
		if(n->right!=NULL)
		q.push(n->right);
		q.pop();
		
	}
}
node* newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->left->right = newNode(10);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}
