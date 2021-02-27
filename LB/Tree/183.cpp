#include<iostream>
#include<map>;
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

void inorderPrint(Node* root, map<int, int> &mp, int height = 0) {
    if(root == NULL) {
        return;
    }
    inorderPrint(root->left, mp, height + 1);
//    if(mp.find(height) == mp.end()) {
        mp[height] = root -> data;
//    }
    inorderPrint(root->right, mp, height + 1);
}

void printView(map<int, int> const &lookup) {
    for(auto elem: lookup) {
        cout << elem.second << " ";
    }
    cout << endl;
}

int main() {
    Node *root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> right = createNode(4);
    root -> left -> right -> right = createNode(5);
    root -> left -> right -> right -> right = createNode(6);
    
    map<int, int>lookup;
    inorderPrint(root, lookup);
    printView(lookup);
    return 0;
}
