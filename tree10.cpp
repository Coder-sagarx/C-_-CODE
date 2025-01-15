//valid bst
#include<iostream>
#include<limits.h>
#include<queue>
using namespace std;
class node{
    public:
    int data ;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* build(node* root){
	int data;
	cout<<"enter data  :";
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter left element for  "<<data<<":  ";
	root->left= build(root->left);
	cout<<"enter right element for  "<<data<<" : ";
	root->right= build(root->right);
	return root;
}
void traverse(node* root){
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
node* temp=q.front();
q.pop();
if(temp==NULL){
    cout<<endl;
    if(!q.empty()){
        q.push(NULL);
    }
}
else{
cout<<temp->data;
if(temp->left){
    q.push(temp->left);
}
if(temp->right){
    q.push(temp->right);
}}}}

bool isbst(node* root ,int min,int max){
if(root==NULL){
    return true;
}
if(root->data >= min && root->data <= max){
bool left=isbst(root->left,min,root->data);
bool right=isbst(root->right,root->data,max);
return left&&right ;
}
else
    return false;
}
 
int main(){
node* root=NULL;
root=build(root);
traverse(root);
int min=INT_MIN;
int max=INT_MAX;
bool bst= isbst(root,min,max );
if(bst){
    cout<<"the tree is bst  ->";
}
else{
    cout<<"not a valid bst ->";
}
    return 0;
}