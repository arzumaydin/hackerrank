//Preorder
#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
/*
void preOrder(Node *root)
{
    cout << root->data << " ";
    if(root->left)
    {
        preOrder(root->left);
        if(root->right)
        {
            preOrder(root->right);
        }
    }
    else {
        if(root->right)
        {
            preOrder(root->right);
        }
}
*/
void preOrder(Node *root)
{
        if(root)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
}

//post order

void postOrder(Node *root) {
        if(root->left)
        {
            postOrder(root->left);
            if(root->right)
            {
                postOrder(root->right);
            }
        }
        else {
            if(root->right)
            {
                postOrder(root->right);
            }
        }
        
        cout << root->data << " ";
    }

void postOrder(Node *root) {
    if(root)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

//in order

void inOrder(Node *root) {
        if(root)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }

//height of tree

int height(Node* root) {
    // Write your code here.
    int left_height = 0;
    int right_height = 0;
    if(root->left)
    {
        left_height = 1 + height(root->left);
    }
    if(root->right)
    {
        right_height = 1 + height(root->right);
    }
        
    return (right_height > left_height ? right_height : left_height);
}

//level order

void levelOrder(Node* root){
        int i = 0;
        int h = height(root);
      
        for(i=1; i<=h; i++){
            printTreeLevelRec(root, i);
            
        }
    }

 int height(Node* n){
        if(n==NULL)
            return 0;
      
        if(n->left==NULL && n->right==NULL)
            return 1;
      
        int lheight = height(n->left);
        int rheight = height(n->right);
      
        return max(lheight, rheight) + 1;
    }
  

    void printTreeLevelRec(Node*  Node, int desired){
        if(Node==NULL)
            return;
        if (desired == 1)
            cout << Node->data << " ";
      
        printTreeLevelRec(Node->left, desired-1);
        printTreeLevelRec(Node->right, desired-1);
    }

    // binary search tree insertion
    
    Node * insert(Node * root, int data) {
        if(!root)
        {
            root = new Node(data);
        }
        else {
            if(root->data < data)
            {
                root->right = insert(root->right, data);
            }
            else if(root->data > data)
            {
                root->left = insert(root->left, data);
            }
        }

        return root;
    }

    //lowest common ancestor of two tree leafs

    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(root)
        {
            if(root->data < v1 && root->data < v2)
            {
                return lca(root->right, v1, v2);
            }
            else if(root->data > v1 && root->data > v2)
            {
                return lca(root->left, v1, v2);
            }
        }
        return root;
    }