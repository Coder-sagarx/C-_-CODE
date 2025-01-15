//to make a binary tree from inorder and postoder
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 class node{
public:
int data;
node*right;
node*left;
node(int d){
this->data=d;
this->left=NULL;
this->right=NULL;
}
 };
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

node* build(int a[],int b[],int n ){
int preorderindex=0;
node* ans=solve(a,b,preorderindex,0,n-1,n);
return ans;
}
node* solve(int a[],int b[],int index,int start,int end,int n){
if(index>=n || start>end){
    return NULL;
}
int element = b[index++];
node* root=new node(element);
int position=findposition(a,element,n);
root->left=solve(a,b,index,start,end,n);
root->right=solve(a,b,index,start,end,n);
return root;
}
int findposition(int a[],int element,int n){
    for(int i=0;i<n;i++){
        if(a[i]==element)
            return i;
    }
    return -1;
}
int main(){
    int n, a[100],b[100];
    cout<<"enter nu of element in vector  ->";
    cin>>n;
    
    cout<<"enter inorder order->";
    for(int i=0;i<n;i++){
        int data;
        cout<<"enter data  ->"<<i+1<<" ->";
        cin>>data;
        a[i];
    }
    
    cout<<"enter pre order->";
    for(int i=0;i<n;i++){
        int data;
        cout<<"enter data nu "<<i+1<<" ->";
        cin>>data;
        b[i];
    }

    node* ans=build(a,b,n);
    traverse(ans);
    return 0;
}