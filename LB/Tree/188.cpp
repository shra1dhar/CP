
#include <iostream>
#include <map>
#include <queue>
using namespace std;

struct Node
{
    int data, distance = 0;
    Node *left, *right;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->left = newNode->right = NULL;
    newNode->data = data;
    return newNode;
}

void printMappedValues(const map<int, int> &mp)
{
    for (auto elem : mp)
    {
        cout << elem.second << " ";
    }
    cout << endl;
}

void levelOrderTraversal(Node *root, map<int, int> &mp)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int distance = temp->distance;

        mp[distance] = temp->data;

        if (temp->left != NULL)
        {
            q.push(temp->left);
            temp->left->distance = distance - 1;
        }

        if (temp->right != NULL)
        {
            q.push(temp->right);
            temp->right->distance = distance + 1;
        }
    }
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->right = createNode(4);
    root->left->right->right = createNode(5);
    root->left->right->right->right = createNode(6);

    map<int, int> lookup;
    levelOrderTraversal(root, lookup);
    printMappedValues(lookup);
    return 0;
}
