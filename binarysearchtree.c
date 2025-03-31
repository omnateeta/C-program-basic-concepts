#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct BST{
	int data;
	struct BST *lchild;
	struct BST *rchild;
};
typedef struct BST *NODE;

NODE create()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct BST));
	printf("\nEnter the value:");
	scanf("%d",&temp->data);
	
	temp->lchild=NULL;
	temp->rchild=NULL;
	return temp;
}

void insert(NODE root,NODE newnode);
void inorder(NODE root);
void postorder(NODE root);
void preorder(NODE root);
void search(NODE root);
void freeTree(NODE root);

void insert(NODE root,NODE newnode)
{
	if(newnode->data<root->data)
	{
		if(root->lchild==NULL)
			root->lchild=newnode;
		else
			insert(root->lchild,newnode);	
	}
	if(newnode->data>root->data)
	{
		if(root->rchild==NULL)
			root->rchild=newnode;
		else
			insert(root->rchild,newnode);	
	}
}

void search(NODE root)
{
	int key;
	NODE cur;
	if(root==NULL)
	{
		printf("BST is empty\n");
		return;
	}
	printf("Enter element to be searched:\n");
	scanf("%d",&key);
	cur=root;
	while(cur!=NULL)
	{
		if(cur->data==key)
		{
			printf("Element is present in BST at %d\n ",key);
			return;
		}
		if(key<cur->data)
			cur=cur->lchild;
		else
			cur=cur->rchild;	
	}
	printf("key elements is not found in BST\n");
}

void preorder(NODE root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
	}
}

void postorder(NODE root)
{
	if(root!=NULL)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d",root->data);
	}
}

void inorder(NODE root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%d",root->data);
		inorder(root->rchild);
	}
}
void freeTree(NODE root) {
    if (root != NULL) {
        freeTree(root->lchild);
        freeTree(root->rchild);
        free(root);
    }
}

int main()
{
	int ch,key,val,i,n;
	NODE root=NULL,newnode;
	while(1)
	{
		printf("~~~menu~~~\n");
		printf("1.create a BST:");
		printf("2.BST Traversals\n");
		printf("3.Search\n");
		printf("4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the number of elements:");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					newnode=create();
					if(root==NULL)
						root=newnode;
					else
						insert(root,newnode);	
				}
				break;
			case 2:if(root==NULL)
						printf("Tree is not created\n");
				   else
				   {
				   		printf("\nThe preorder display:");
				   			preorder(root);
				   		printf("\nThe postorder display:");
					    	postorder(root);
						printf("\nThe inorder display:");
							inorder(root);		
					}			
					break;
			case 3:search(root);
					break;
			case 4: freeTree(root);
                    printf("Exiting the program.\n");
					exit(0);	
			default:printf("Invalid choice\n");
			
		}
	}
	return 0;
}

