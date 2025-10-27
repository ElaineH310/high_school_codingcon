#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode (int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->left=nullptr;
    newNode->right=nullptr;
    return newNode;
}
void inorderTrav (Node* root){
    if (root != nullptr){
        inorderTrav (root->left);
        cout<<root->data<<" ";
        inorderTrav (root->right);
    }
}
void postorderTrav (Node* root){
    if (root != nullptr){
        postorderTrav (root->left);
        postorderTrav (root->right);
        cout<<root->data<<" ";
    }
}
void preorderTrav (Node* root){
    if (root != nullptr){
        cout<<root->data<<" ";
        preorderTrav (root->left);
        preorderTrav (root->right);
    }
}
int main() {
    Node* root= createNode (1);
    root->left=createNode (3);
    root->right=createNode(2);
    root->left->left=createNode (5);
    root->right->left= createNode (3);
    cout << "Pre-order traversal: ";
    preorderTrav(root); 
    cout << endl;
    cout << "Post-order traversal: ";
    postorderTrav(root);  
    cout << endl;
    cout << "In-order traversal: ";
    inorderTrav(root); 
}
