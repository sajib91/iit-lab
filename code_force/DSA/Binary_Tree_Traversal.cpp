#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

void preorder(struct node *root){
    if(root == 0)
     return;
    printf("%d ",root -> data);
    preorder(root -> left);
    preorder(root -> right); 

}
void inorder(struct node *root){
    if(root == 0)
     return;
    inorder(root -> left);
    printf("%d ",root -> data);
    inorder(root -> right); 
}
void postorder(struct node *root){
    if(root == 0)
    return;
    postorder(root -> left);
    postorder(root -> right);
    printf("%d ",root -> data);
}

int main(){
    struct node *root;

    printf("Preorder is : ");
    preorder(root);
    printf("\n");
    printf("Inorder is: ");
    inorder(root);
    printf("\n");
    printf("postorder is: ");
    postorder(root);

    return 0;
}