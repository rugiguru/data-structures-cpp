#include<iostream>
using namespace std;

class Node 
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};

Node * insert(Node *root, int key)
{
    if(root == NULL)
    {
        return new Node(key);
    }
    
    if(key < root->key)
    {
        root->left = insert(root->left, key);
    } else 
    {
        root->right = insert(root->right, key);
    }

    return root;
}

bool search(Node *root, int key)
{
    if(root == NULL)
    {
        return false;
    }

    if(key == root->key)
    {
        return true;
    }

    if(key < root->key)
    {
        return search(root->left, key);
    } else 
    {
        return search(root->right, key);
    }

}


void printInorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    printInorder(root->left);
    cout << root->key << " ";
    printInorder(root->right);
}

// Challenge : print all elements of BSt which lie in the range k1 and k2

void printRange(Node *root, int k1, int k2)
{
    if(root == NULL)
    {
        return;
    }

    if(root->key >= k1 and root->key <= k2)
    {
        printRange(root->left, k1, k2);
        cout << root->key << " ";
        printRange(root->right, k1, k2);
    } 
    else if(root->key > k2)
    {
         printRange(root->left, k1, k2);
    } 
    else 
    {
         printRange(root->right, k1, k2);
    }

   
}

int main(int argc, char const *argv[])
{
   
   Node *root = NULL;
   int arr[] ={ 1,8,6,10,3,4,9};

   for(int x : arr)
   {
       root = insert(root, x);
   }

//    printInorder(root);

   printRange(root, 1, 6);


// cout << search(root, 11) << endl;

}
