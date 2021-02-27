#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left, *right;
};

Node* createNode(int data) {
    Node *newNode = new Node();
    newNode -> left = newNode -> right = NULL;
    newNode -> data = data;
    return newNode;
}

void inorderPrint(Node* root) {
    if(root == NULL) {
        return;
    }
    inorderPrint(root->left);
    cout << root -> data << " ";
    inorderPrint(root->right);
}

int main() {
    Node *root = createNode(32);
    root -> left = createNode(2);
    root -> right = createNode(123);
    return 0;
}
