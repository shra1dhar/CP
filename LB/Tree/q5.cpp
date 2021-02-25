#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->left = newNode->right = NULL;
    newNode->data = data;
    return newNode;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

void mirrorTree(Node *root)
{
    Node *temp = root->right;
    if (root->left != NULL)
    {
        root->right = root->left;
        mirrorTree(root->left);
    }
    if (temp != NULL)
    {
        root->left = temp;
        mirrorTree(temp);
    }
}

int main()
{
    Node *tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);
    printf("Inorder of original tree: ");
    inorderPrint(tree);

    // Function call
    mirrorTree(tree);

    printf("\nInorder of Miror tree: ");
    inorderPrint(tree);
    return 0;
}
