#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
public:
    
};
 
// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

// this functions counts 

int count(Node *p)
{
    int counter = 0;
    while(p != NULL)
    {
        counter++;
        p=p->next;
    }
    return counter;
}

int sum (Node *p)
{
    int sum = 0;
    while(p!= NULL)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int maxNumber(Node *p)
{
    int max = 0;
    while (p!= NULL)
    {
        if(p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
 

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
 
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
 
    second->data = 2; // assign data to second node
    second->next = third;
 
    third->data = 3; // assign data to third node
    third->next = NULL;
 
    // printList(head);
    //  cout << count(head);
    //  cout << sum(head);
    //  cout << maxNumber(head);

    // inserting a node before first node of LL O(1)
    Node *befFirst = new Node();
    befFirst->data = 15;
    befFirst->next = head;
    head = befFirst;
    // end 

    // inserting a node after given node  of LL
    Node *befFirst = new Node();
    befFirst->data = 15;
    befFirst->next = head;
    head = befFirst;
    // end 

    cout << maxNumber(head);

 
    return 0;
}



