#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
    
};
struct node *create(){
    int x;
    scanf("%d",&x);
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    if(x==-1)
      return 0;
     newnode -> data = x;
     printf("Enter left child of %d: ",x);
     newnode -> left = create();
     printf("Enter right child of %d: ",x);
     newnode -> right = create(); 
     return newnode;

}
void printTree(struct node* root) {
    if(root == NULL)
        return;
    
    printTree(root->left);
    printf("%d ", root->data);
    printTree(root->right);
}

int main(){
    struct node *root;
    root = 0;
    root = create();
     printf("The tree elements in in-order traversal are: ");
    printTree(root);
    printf("\n");

    return 0;
}