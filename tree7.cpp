//left view and right view
#include<iostream>
#include<queue>
using namespace std;
class node{
public:
int data;
node* right;
node* left;
node(int d){
this->data=d;
this->left=NULL;
this->right=NULL;
}
};
node* build(node* root){
int data;
cout<<"enter data :";
cin>>data;
root=new node(data);
if(data==-1){
    return NULL;
}
cout<<"enter left of the data"<<data<<" ";
root->left=build(root->left);
cout<<" enter right of the data"<<data<<" ";
root->right=build(root->right);

}
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
        cout<<temp->data;
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }}}}

vector<int> *leftview(node* root ,vector<int>&ans ,int level){
if(root==NULL){
    return  0;
}
if(level==ans.size()){
    ans.push_back(root->data);
}
leftview(root->left ,ans,level+1);
leftview(root->right,ans,level+1);

}
vector<int>* rightview(node* root ,vector<int>&ans1 ,int level){
if(root==NULL){
    return 0;
}
if(level==ans1.size()){
    ans1.push_back(root->data);
}
rightview(root->right,ans1,level+1);
rightview(root->left ,ans1,level+1);

}
int main(){
node *root=NULL;
vector<int>ans;
vector<int>ans1;
root=build(root);
traverse(root);

cout<<"\n1=leftview"<<endl;
cout<<"2=rightview"<<endl;
int choise;
cin>>choise;
if(choise==1){
    
cout<<"left view :";
leftview(root,ans,0);
for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}

}
else if(choise==2){

cout<<" rightview:";
rightview(root,ans1,0);
for(int i=0;i<ans1.size();i++){
    cout<<ans1[i];
}
}
else{
    cout<<"invalid number->";
}
}