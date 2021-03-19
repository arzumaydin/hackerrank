#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    Node* next;
    int data;
};

struct Stack{
    struct Node* top;
    void create();
    int pop();
    void push(int x);
    void print();
};

void Stack::create()
{
    top = NULL;
}

int Stack::pop()
{
    Node* topop; 
    topop = top;
    int temp = topop->data;
    top = top->next;
    delete topop;
    return temp;
}

void Stack::push(int x)
{
    Node* addnode = new Node;
    addnode->data = x;
    addnode->next = top;
    top = addnode;
}

void Stack::print()
{
    Node* temp = top;
    int max = 0;
    while(temp)
    {
        if(max <= temp->data)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    
    cout << max << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Stack stack;
    stack.create();
    int count, query, number; 
    cin >> count; 
    for(int i = 0; i < count; i++)
    {
        cin >> query >> number;
        switch(query){
            case 1:
                stack.push(number);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.print();
                break;
            default:
                break;
        }
    }
    return 0;
}
