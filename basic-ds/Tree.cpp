#include<iostream>
#include<queue>
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

void printInorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPostOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}


void printLevelOder(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp = q.front();

        if(temp == NULL)
        {
            cout << endl;
            q.pop();

            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else {
            q.pop();
            cout << temp->data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}

int height(Node *root)
{
    if(root ==NULL)
    {
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1+ max(h1,h2);
}

int main()
{
    // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    // 1 2 4 -1 -1 -1 3 5 -1 -1 6 -1 -1 (Implemented input)
    Node *root = buildTree();

    // printPreOder(root);    
    // cout << endl;

    // printInorder(root);
    // cout << endl;


    // printPostOrder(root);
    // cout << endl;


    // printLevelOder(root);


    // cout << height(root);
    return 0;;
}
