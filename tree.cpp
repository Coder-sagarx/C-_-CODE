//preorder postorder inorder
#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
	int data;
	node *right ;
	node *left;
	
	node(int d){
	this ->data=d;
	this ->right=NULL;
	this->left=NULL;	
	}
	
};
//tree built
node* treebuild(node* root){
	cout<<"enter the data"<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	
	cout<<"enter data for inserting in left :"<<data<<endl;
	root->left=treebuild(root->left);
	cout<<"enter data for inserting in right :"<<data<<endl;
	root->right=treebuild(root->right);
	
	return root; 
}
//traverse 
void levelordertraverse(node* root){
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
//inorder 
void inorder(node* root){
	//base case
	if(root ==NULL){
		return ;
	}
	
	inorder(root->left);  //left 
	cout<<root->data<<" ";  //node
	inorder(root->right);  //right
		
}
//preorder 
void preorder(node* root){
	//base case
	if(root ==NULL){
		return ;
	}
	
	cout<<root->data<<" ";  //node
	preorder(root->left);  //left 
	preorder(root->right);  //right
	
}
//postorder 
void postorder(node* root){
	//base case
	if(root ==NULL){
		return ;
	}
	
	postorder(root->left);  //left 
	postorder(root->right);  //right	
	cout<<root->data<<" ";  //node
}
int main(){
node *root =NULL;
// 1	3	4	-1	-1	9	-1	-1	8	7	-1	-1	-1
root=treebuild(root);
cout<<"\n  print  level order traverse\n"<<endl;
levelordertraverse(root);
cout<<"\n  print  inorder \n"<<endl;
inorder(root);
cout<<"\n  print  preorder \n"<<endl;
preorder(root);
cout<<"\n  print  postorder \n"<<endl;
postorder(root);

	return 0;
}


