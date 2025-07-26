//Creating tree using linked list and structure, created in heap
#include <iostream>     
using namespace std;

struct Node {
    int data;
    struct Node *right;
    struct Node *left;
};

struct Node *CreateNode(int value) {
    struct Node *NewNode = new Node;
    NewNode->data = value;
    NewNode->left = NewNode->right = nullptr;
    return NewNode;
}

void Inorder(struct Node *root) {
    if(root == NULL) {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Preorder(Node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node *root) {
    if(root==NULL) {
        return;
    }
    Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
}

int count(struct Node *root) {
    int x, y;
    if(root!=NULL) {
        x = count(root->left);
        y = count(root->right);
        return x+y+1;
    }
    return 0;
}

int height(Node *root) {
    int x = 0, y = 0;
    
    if(root == nullptr) { 
        return 0;
    }
        x = height(root->left);
        y = height(root->right);
        if(x>y) {
            return x+1;
        }
        else {
            return y+1;
        }
    }



int main() {
    

   Node *root = CreateNode(1);
   root->left = CreateNode(2);
   root->right = CreateNode(3);
   root->left->left = CreateNode(4);
   root->left->right = CreateNode(5);
   root->right->left = CreateNode(6);
   root->right->right = CreateNode(7);

   Inorder(root);
   cout << endl;
   Preorder(root);
    cout << endl;
   Postorder(root);
   cout << endl;
   cout << height(root) << " height of tree ";

    
    return 0;
}

