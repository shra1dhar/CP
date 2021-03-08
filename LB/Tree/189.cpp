#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    Node *left, *right;
    int data;
};

Node *newNode(int data)
{
    Node *newNode = new Node();
    newNode->left = newNode->right = NULL;
    newNode->data = data;
    return newNode;
}

void zigzagTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    bool isLeftToRight = true;
    stack<Node *> currentStack;
    stack<Node *> auxillaryStack;

    currentStack.push(root);

    while (!currentStack.empty())
    {

        Node *temp = currentStack.top();
        cout << temp->data << " ";
        currentStack.pop();

        if (isLeftToRight)
        {
            if (temp->left != NULL)
            {
                auxillaryStack.push(temp->left);
            }
            if (temp->right != NULL)
            {
                auxillaryStack.push(temp->right);
            }
        }
        else
        {
            if (temp->right != NULL)
            {
                auxillaryStack.push(temp->right);
            }
            if (temp->left != NULL)
            {
                auxillaryStack.push(temp->left);
            }
        }

        if (currentStack.empty())
        {
            swap(currentStack, auxillaryStack);
            isLeftToRight = !isLeftToRight;
        }
    }
}

int main()
{

    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);

    zigzagTraversal(root);
    return 0;
}
