#include <iostream>     
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *CreateNode(int value) {
    struct Node *newNode = new Node;
    newNode->data = value;
    newNode->left =newNode->right = nullptr;
    return newNode;
}

void Preorder(struct Node *root) {
    if(root == NULL) {
       return;
    }
    
    else {
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }

}

void inorder(struct Node *root) {
    if(root == NULL) {
        return;
    }
    else {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void Postorder(struct Node *root) {
    if(root == NULL) {
        return;
    }
    else {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}

int count(struct Node *root) {
    int x,y;
    if(root!=NULL) {
        x = count(root->left);
        y = count(root->right);
    }
    return x+y+1;
    
}

int main() {
    

    struct Node *root = CreateNode(1);
    root->left = CreateNode(2);
    root->left->left = CreateNode(3);
    root->left->right = CreateNode(4);
    root->right = CreateNode(5);
    root->right->left = CreateNode(6);
    root->right->right = CreateNode(7);
    Postorder(root);

    
    return 0;
}
