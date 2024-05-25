#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
}root=NULL;
struct node *newnode(int item){
	struct node *temp=()struct node*) malloc(sizeo(struct node));
	temp->item=item;
	temp->left=Null;
	temp->right=Null;
	return temp;
};
struct node *insertion(struct newnode, struct newnode->data)
{
	
	if(root==NULL)
	{
		root = newnode;
		return newnode;
	}
	else if(newnode->data<root->data){
		return insertion(newnode->left,newnode);
	}
}
int main()
{
	int op;
	
	printf("binary search tree program");
	do{
		printf("\nchoose your option");
		printf("\n1.insertion\n2.deletion\n3.min value\n");
		printf("4.max value\n5.search\n6.inorder\n7.preorder\n8.postorder\n 9.cretionof bst\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				{
					struct node* newnode= (struct node*)malloc(sizeof(struct node));
	            	printf("enter the data");
	            	scanf("%d",newnode->data;
					insertion(newnode,newnode->data);
				}
				break;
			case 9:
				{
					create();
				}
		}
	}
	
}
