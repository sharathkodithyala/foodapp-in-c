#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
void insert(struct node *root,struct node *newnode){
	if(root->data>newnode->data){
		if(root->left!=NULL)
		insert(root->left,newnode);
		else
		root->left=newnode;
	}
	else if(root->data<newnode->data){
		if(root->right!=NULL)
		insert(root->right,newnode);
		else
		root->right=newnode;
	}
}





void display(struct node *root){
	if(root!=NULL)
	{
		display(root->left);
		printf("%d",root->data);
		display(root->right);
	}
	
}





int main(){
	int i,j,op;
	char ch;
	struct node *newnode,*temp,*root=NULL;
	printf("**Binary search tree");
	do {
		printf("\n1.insertion\n2.deletion\n3.display");
		scanf("%d",&op);
		switch(op){
			case 1:
				newnode=(struct node*)malloc(sizeof(struct node));
				newnode->left=newnode->right=NULL;
				printf("enter the inserting value");
				scanf("%d",&newnode->data);
				if(root==NULL)
				root=newnode;
				else
				insert(root,newnode);
				break;
			case 3:
				display(root);
		}
		printf("\n do want to run again");
		scanf("\n%c",&ch);
	}while(ch=='s');
}
