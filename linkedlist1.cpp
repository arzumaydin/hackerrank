#include <iostream>
#include <string>

using namespace std;

struct Linkedlist{
    struct Node* head;
};

struct Node{
    Node* next;
    int data;
};

int main()
{
    Linkedlist mylist;
    mylist.head = new Node;
    mylist.head->next = mylist.head;

    Node* ptr = mylist.head->next;
    int element = 0; 
    int size = 0; 
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        cin>>element;
        Node* toadd = new Node;
        toadd->data = element;
        toadd->next = ptr->next;
        ptr->next = toadd;
        ptr = ptr->next;
    }

    ptr = mylist.head->next;

    for(int i = 0; i < size; i++)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    return EXIT_SUCCESS;
}