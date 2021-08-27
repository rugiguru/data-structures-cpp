#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node * buildTree()
{
    int data;
    cin >> data;

    if(data == -1)
    {
        return NULL;
    }

    Node *n = new Node(data);
    n->left = buildTree();
    n->right = buildTree();
}

void printPreOder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printPreOder(root->left);
    printPreOder(root->right);
}

int main()
{
    // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    Node *root = buildTree();
    printPreOder(root);    
    return 0;;
}
