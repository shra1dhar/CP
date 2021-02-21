#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if(newNode == NULL) {
        cout  << "Memory exhausted" << endl;
    }
    newNode -> left = newNode -> right = NULL;
    newNode -> data = data;
    return newNode;
}

vector<int> levelOrderTraversal(Node* root) {
    vector<int> v;
    
    if(root == NULL) {
        return v;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        Node* temp = q.front();
        v.push_back(temp->data);
        q.pop();
        
        if(temp -> left != NULL) {
            q.push(temp->left);
        }
        
        if(temp->right != NULL) {
            q.push(temp -> right);
        }
    }
    return v;
}

int main() {
    Node* node = createNode(2);
    node -> left = createNode(12);
    node -> right = createNode(24);
    node -> left -> left = createNode(32);
    node -> left -> right = createNode(25);
    node -> right -> left = createNode(23);
    node -> right -> right = createNode(92);
    
    levelOrderTraversal(node);
    return 0;
}
    