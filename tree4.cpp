//height and balance
#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
	this->data=d;
	this->left=NULL;
	this->right=NULL;	
	}
};
//insert
node* insert (node* root){
	int data;
	cout<<"enter data  :"<<endl;
	cin>>data;
	root=new node(data);
	if(data==-1){   //base case
		return NULL;
	}
	cout<<"  inserting data in left of  "<<data<<" :";
	root->left= insert(root->left);
	cout<<"  inserting data in right of  "<<data<<"  :";
	root->right= insert(root->right);
	
	return root;
}
//traverse
void traverse(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node *temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}
//height
int height(node* root){
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);
	int h2=height(root->right);
	int ans=max(h1,h2)+1;
	return ans;
}
//balance
bool isbalance(node * root){
if(root==NULL){   //base case
	return true;
}
	bool left=isbalance(root->left);
	bool right=isbalance(root->right);	
	bool val=abs(height(root->left)-height(root->right))<=1;
	
	if(left&&right&&val){
	return true;
	}
	else{
	return false;
	}
}
int main(){
node* root=NULL;
root=insert(root);
traverse(root);


if(isbalance(root)){
	cout<<"balanced  ";
}
else{
cout<<" not balanced";
}
	return 0;
}


