//leaf node and height
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
//no of leaf node
void leaf(node* root,int &noofleafnode){

//base condition
if(root==NULL){
	return ;
}
leaf(root->left,noofleafnode);	
leaf(root->right,noofleafnode);
if(root->left==NULL && root->right==NULL){
	noofleafnode++;
}

}

int main(){
node *root=NULL;


root=buildtree(root);
traverse(root);
int h=hight(root);
cout<<"hight of tree  :"<<h<<endl;

int noofleafnode=0;
leaf(root,noofleafnode);
cout<<"no of leafnode  is ->"<<noofleafnode<<endl;
	return 0;
}


