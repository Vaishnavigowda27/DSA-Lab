#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};


void inorder(struct node* root) {
  if (root == NULL) 
  return;
  inorder(root->left);
  printf("%d ->", root->data);
  inorder(root->right);
}


void preorder(struct node* root) {
  if (root == NULL) 
  return;
  printf("%d ->", root->data);
  preorder(root->left);
  preorder(root->right);
}


void postorder(struct node* root) {
  if (root == NULL) 
  return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ->", root->data);
}


struct node* create(int value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}


struct node* insertLeft(struct node* root, int value) {
  root->left = create(value);
  return root->left;
}


struct node* insertRight(struct node* root, int value) {
  root->right = create(value);
  return root->right;
}

int main() {
  struct node* root = create(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);

  printf("Inorder traversal \n");
  inorder(root);

  printf("\nPreorder traversal \n");
  preorder(root);

  printf("\nPostorder traversal \n");
  postorder(root);
}