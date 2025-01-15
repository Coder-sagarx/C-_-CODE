#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
	int data;
	node* right ;
	node* left;
	node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
void build(node * &root){
	queue<node*>q;
	int data;
	cout<<"enter data :";
	cin>>data;
	root=new node(data);
	q.push(root);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		cout<<"enter left node for :"<<temp->data<<" ";
		int leftdata;
		cin>>leftdata;
		if(leftdata!=-1){
			temp->left=new node(leftdata);
			q.push(temp->left);
		}
		 cout<<"enter right node for :"<<temp->data<<" ";
		 int rightdata;
		 cin>>rightdata;
		 if(rightdata!=-1){
		 	temp->right=new node(rightdata);
		 	q.push(temp->right);
		 }
	}
}
//traverse 
void traverse(node *root){
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
int main(){
node *root=NULL;
build(root);
traverse(root);
	return 0;
}


