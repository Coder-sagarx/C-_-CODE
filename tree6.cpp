//to find lowewst comman ansestor and max length sum
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
	}
};

node* insert(node* root){
int data;
cout<<" enter data :";
cin>>data;
 root=new node(data);

if(data == -1){
    return NULL ;
}
cout<<"enter data in left of "<<data<<" ->";
root->left=insert(root->left);
cout<<"enter data in right of "<<data<<" ->";
root->right=insert(root->right);
return root;
}
void traverse(node* root){
queue<node*>q;
q.push(root);
q.push(NULL);
cout<<endl;
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
}}}}

void maxlengthsum(node *root,int len,int &maxlen,int sum,int &maxsum){
if(root==NULL){
if(len>maxlen){
    maxlen=len;
    maxsum=sum;
}
else if(len==maxlen){
    maxsum=max(maxsum,sum);
}
    return ;
}
sum+=root->data;
maxlengthsum(root->left,len,maxlen,sum,maxsum);
maxlengthsum(root->right,len,maxlen,sum,maxsum);
}

node* lca(node* root,int n1,int n2){
if(root==NULL){
    return NULL;
}
if(root->data==n1||root->data==n2){
    return root;
}
node* leftans=lca(root->left,n1,n2);
node* rightans=lca(root->right,n1,n2);
if(leftans!=NULL&&rightans!=NULL){
return root;
}
if(leftans!=NULL&&rightans==NULL){
return leftans;
}
else if(leftans==NULL&&rightans!=NULL){
    return rightans;
}
else{
    return NULL;
}
}
int main(){
    node* root=NULL;
    root=insert(root);
    traverse(root);
    int maxsum=0;
    int maxlen=0;
    maxlengthsum(root,0,maxlen,0,maxsum);
    cout<<"max sum ::"<<maxsum;
    int n1,n2;
    cout<<"for finding the lowest comman ansestor ->";
    cin>>n1>>n2;
    node* ans=lca(root,n1,n2);
    cout<<"the olowest comman ansestor of n1 and n2 is ->"<<ans->data;

    return 0;

}