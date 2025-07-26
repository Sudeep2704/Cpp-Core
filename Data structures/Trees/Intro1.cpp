//creating tree using array, demonstration of preorder, postorder, inorder traversals 
#include <iostream>     
using namespace std;

int tree[] = {1,2,3,4,5};
int n = sizeof(tree) / sizeof(tree[0]);

void Preorder(int index) {
    if(index >= n) {
        return;
    }
    cout << tree[index] << " ";
    Preorder(2 * index + 1);
    Preorder(2 * index + 2);
}

void Inorder(int index) {
    if(index >= n) {
        return;
    }
    Inorder(2 * index + 1);
    cout << tree[index] << " ";
    Inorder(2 * index + 2);
}

void Postorder(int index) {
    if(index >= n) {
        return;
    }
    Postorder(2 * index + 1);
    Postorder(2 * index + 2);
    cout << tree[index] << " ";
}



int main() {
    

    cout << "preorder Traversals" << endl;
    Preorder(0);
    cout << endl;
    cout << "inordr traversals" << endl;
    Inorder(0);
    cout << endl;
    cout << "Postorder Traversals" << endl;
    Postorder(0);

    
    return 0;
}
