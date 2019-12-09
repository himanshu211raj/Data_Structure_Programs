#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
int data;
struct node *left;
struct node *right;
} node;
node *create()
{
node *p;
int x;
printf("Enter data(-1 for no data):");
scanf("%d",&x);
if(x==-1)
return NULL;
p=(node*)malloc(sizeof(node));
p->data=x;
printf("Enter left child of %d:\n",x);
p->left=create();
printf("Enter right child of %d:\n",x);
p->right=create();
return p;
}
void postorder(node *t)
{
if(t!=NULL)
{
postorder(t->left);
postorder(t->right);
printf("\n%d",t->data);
}
}
int main()
{
node *root;
printf("\n\tKAUSTUBH\n");
root=create();
printf("\nThe postorder traversal of tree is:\n");
postorder(root);
return 0;
}
