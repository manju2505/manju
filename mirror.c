#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
 
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
   
  return(node);
void mirror(struct node* node) 
{
  if (node==NULL) 
    return;  
  else
  {
    struct node* temp;
     
    mirror(node->left);
    mirror(node->right);
 
    temp        = node->left;
    node->left  = node->right;
    node->right = temp;
  }
void inOrders(struct node* node) 
{
  if (node == NULL) 
    return;
   
  inOrders(node->left);
  printf("%d ", node->data);
 
  inOrders(node->right);
}  
 
 
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5); 
  
  printf("\n the constructed tree is \n");
  inOrders(root);
   
  mirror(root); 
   
  printf("\n traversal of the mirror tree is \n");  
  inOrders(root);
   
  getchar();
  return 0;  
}
