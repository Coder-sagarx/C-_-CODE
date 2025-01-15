//height and longest path
#include<iostream>
#include<queue>
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
//build tree
node* buildtree(node* root){
	int data;
	cout<<"enter data  :";
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter left element for  "<<data<<":  ";
	root->left= buildtree(root->left);
	cout<<"enter right element for  "<<data<<" : ";
	root->right= buildtree(root->right);
	return root;
}
//display
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
//hight
int hight(node* root){
	
	if(root==NULL){
		return 0;
	}
	
	int l=hight(root->left);
	int r=hight(root->right);
	int ans=max(l,r)+1;
	
	return ans;
}
//longet path
int longest_path(node* root){
if(root==NULL){
	return 0;
}
int l1=longest_path(root->left);
int l2=longest_path(root->right);
int l3=hight(root->left)+hight(root->right)+1;
int ans =max(l1,max(l2,l3));

	return ans;
}

int main(){
node *root=NULL;


root=buildtree(root);
traverse(root);
//longest path n a tree
int count=longest_path(root);
cout<<"no of node in longest path  :"<<count<<endl;

return 0;
}



