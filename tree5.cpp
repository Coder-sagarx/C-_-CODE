//identical or not 
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

//buildtree
node* buildtree(node* root){
	queue<node*>q;
	int data;
	cout<<"enter data  :";
	cin>>data;
	root=new node(data);
	q.push(root);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"enter left node for the data  "<<temp->data<<" ";
		int leftdata;
		cin>>leftdata;
		if(leftdata!=-1){
			temp->left=new node(leftdata);
			q.push(temp->left);
		}
		
		cout<<"enter right node for the data "<<temp->data<<" ";
		int rightdata;
		cin>>rightdata;
		
		if(rightdata!=-1){
			temp->right=new node(rightdata);
			q.push(temp->right);
		}
		}
		return root;
		}
//display
void display(node* root){
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
//identical -> mean same or not
bool identical(node* r1,node *r2){
	queue<node*>q1;
	queue<node*>q2;
	q1.push(r1);
	q1.push(NULL);
	q2.push(r2);
	q2.push(NULL);
	
	if(r1==NULL&&r2==NULL){
		return true;
	}
	if(r1==NULL&&r2!=NULL){
		return false;
	}
	if(r1!=NULL&&r2==NULL){
		return false;
	}
	
	bool left=identical(r1->left,r2->left);
	bool right=identical(r1->right,r2->right);
	bool val=r1->data==r2->data;
	if(left&&right&&val){
		return true;
	}
	else{
	return false;
}}
int main(){
node* root1=NULL;
node* root2=NULL;

root1=buildtree(root1);
root2=buildtree(root2);
cout<<"first tree ->\n";
display(root1);
cout<<"secound tree ->\n";
display(root2);

bool ok=identical(root1,root2);
if(ok){
	cout<<"\nidentical";
}
else{
cout<<"not identical  _.";}
	return 0;
}


