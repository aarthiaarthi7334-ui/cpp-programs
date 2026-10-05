#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;
void insertBeginning(int x)
{
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}
void insertEnd(int x)
{
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void removeCoach(int x)
{
    Node* temp = head;
    Node* prev = NULL;

    if (head == NULL)
        return;

    if (head->data == x)
    {
        head = head->next;
        delete temp;
        return;
    }

    while (temp != NULL && temp->data != x)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL)
    {
        prev->next = temp->next;
        delete temp;
    }
}

// Display all coaches
void display()
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);

    cout << "Initial coaches: ";
    display();

    insertBeginning(1);
    cout << "After adding at beginning: ";
    display();

    insertEnd(5);
    cout << "After adding at end: ";
    display();

    removeCoach(3);
    cout << "After removing coach 3: ";
    display();

    return 0;
}