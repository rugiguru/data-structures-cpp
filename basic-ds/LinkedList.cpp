#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
  
        Node(int data)
        {
            this->data = data;
            next = NULL;
        }
    
};
 
// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << "-->";
        n = n->next;
    }
    cout << endl;
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

void insertAthead(Node* &head, int data)
{
    if(head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *n = new Node(data);
    n->data = data;
    n->next = head;
    head = n;

}

void insertAtposition(Node* head, int data, int pos)
{
    if(pos == 0)
    {
        insertAthead(head, data);
    } 
    else {
        Node* temp = head;
        for (int i = 0; i < pos -1 ; i++)
        {
            temp = temp->next;
        }

        Node* n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

// space => O(n) , time=> O(n)
Node* recursiveReverse(Node* head)
{
    // base case
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* smallHead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}

// space => O(1) , time=> O(n)
void iterativeReverse(Node* &head)
{
    Node* prev = NULL;
    Node* current = head;
    Node* temp;

    while(current != NULL)
    {
        // store next6 addr
        temp = current->next;
        // update current
        current->next = prev;

        prev = current;
        current = temp;
    }
    head = prev;
    return;
}


Node* kReverse(Node* head, int k)
{
    // base case
    if(head == NULL)
    {
        return head;
    }

    Node* prev = NULL;
    Node* current = head;
    Node* temp;
    int cnt = 1;

    while(current != NULL and cnt <= k)
    {
        // store next6 addr
        temp = current->next;
        // update current
        current->next = prev;

        prev = current;
        current = temp;
        cnt++;
    }

    if(temp !=NULL)
    {
        head->next = kReverse(temp,k);
    }

    return prev;
}
 

int main()
{
    Node* head = NULL;
    
    insertAthead(head, 56);
    insertAthead(head, 57);
    insertAthead(head, 58);
    insertAthead(head, 59);
    insertAthead(head, 60);
    insertAthead(head, 61);
    insertAthead(head, 62);
    // insertAtposition(head, 100,2);
    printList(head);
    // head = recursiveReverse(head);
    // iterativeReverse(head);.
    head = kReverse(head, 3);
    printList(head);
    return 0;
}



