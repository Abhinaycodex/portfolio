#include <iostream>
#include <queue>
using namespace std;

class node{
    
    int data;
    node* left;
    node* right;

    node (int d){
        this -> data = d;
        this -> left =NULL;
        this -> right=NULL;
    }
};


    node* buildtree(node *root){

        cout << "enter the data " << endl;
        int data;
        cin >> data;
        root = new node(data);

        if (data==-1){
            return NULL;
        }

        cout << "Enter data for inserting in left of " << data << endl;
        root->left = buildTree(root->left);
        cout << "Enter data for inserting in right of " << data << endl;
        root->right = buildTree(root->right);
        return root;

        
    }




int main (){

    node* root =NULL;
    root = buildtree(root);

    return 0;
}