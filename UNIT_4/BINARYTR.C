#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int key;
	struct node *left;
	struct node *right;
};

//return a new node with the given value
struct node *createnode(int val)
{
	struct node *newNode;

	newNode = malloc(sizeof(struct node));
	newNode->key = val;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

//inserts nodes in the binary search tree

struct node *insertNode(struct node *root, int val)
{
	if(root==NULL)
		return createnode(val);
	if(root->key < val)
		root->right = insertNode(root->right, val);
	if(root->key > val)
		root->left = insertNode(root->left, val);

	return root;
}

// inorder traversal of the binary search tree

void preorder(struct node *root)
{
	if(root == NULL)
	return;

	//visit the root
	printf("%d", root->key);

	//traverse the left subtree
	preorder(root->left);

	//traverse the right subtree
	preorder(root->right);
}

void main()
{
	struct node *root = NULL;

	int data;
	char ch;
	int choice;
	// do--while loop to display various option to select

	do
	{
		printf("\nSelect one of the operations:");
		printf("\n1.To insert a new node in the Binary tree.");
		printf("\n2. To display the node of the Binary tree.");

	       //	int choice;
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			printf("\nEnter the value to be inserted.\n");
			scanf("%d", data);
			root=insertNode(root,data);
			break;

			case 2:
			printf("\nPreorder traversal of the Binary tree.");
			preorder(root);
			break;

			default:
			printf("\nWrong entry.");
			break;
		}
		printf("\nDo you want to continue?(Type Y or N)");
		scanf("%c", &ch);
	}while(ch=='Y'||ch=='y');

	getch();
}