#include<iostream>
using namespace std;

int globalHeight = 0;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if(newNode == NULL) {
        cout << "Memory exhausted";
        return newNode;
    }
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

void calculateHeight(Node* root, int h) {
    
    int height = h+1;
    globalHeight = max(globalHeight, height);
    
    if((root -> left == NULL) && (root -> right == NULL)) {
        return;
    };
    
    if(root -> left != NULL) {
        calculateHeight(root -> left, height);
    }
    
    if(root -> right != NULL) {
        calculateHeight(root -> right, height);
    }
}

int main() {
    Node* node = createNode(2);
    node -> left = createNode(12);
    node -> right = createNode(24);
    node -> left -> left = createNode(32);
    node -> left -> right = createNode(25);
    node -> right -> left = createNode(23);
    node -> right -> right = createNode(92);
    calculateHeight(node, 0);
    
    cout << "Height is: " << globalHeight << endl;
    return 0;
}
