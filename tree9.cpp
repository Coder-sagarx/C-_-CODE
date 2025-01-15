// insert search display
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node * insertintobst(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    if (data < root->data)
    {
        root->left = insertintobst(root->left, data);
    }
    else
    {
        root->right = insertintobst(root->right, data);
    }
}
void build(node* &root)
{
    int data;
    cout << "enter data in bst:";
    cin >> data;

    while (data != -1)
    {
        root = insertintobst(root, data);
        cout << "enter data in bst :";
        cin >> data;
    }
}

void traverse(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            }}}

void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}
int mini(node* root){
    node* temp=root;
    if(temp->left==NULL){
    return  temp->data;
    }
while(temp->left!=NULL){
    temp=temp->left;
}
return temp->data;
}
int  max(node* root){
    node* temp=root;
    if(temp->right==NULL){
        return temp->data;
    }
while(temp->right !=NULL){
    temp=temp->right;
}
return temp->data;
}
//delete code
node* deletion(node* root,int d){
if(root==NULL){
    return root;
}

if(root->data==d){
//delete leaf node
if(root->left==NULL && root->right==NULL){
delete root;
root=NULL;
}
//delete node which have left child
if(root->left!=NULL && root->right==NULL){
node* temp=root->left;
delete root;
return temp;
}
//delete node which have right child
if(root->left==NULL && root->right!=NULL){
node *temp=root->right;
delete root;
return temp;
}
//delet node which have left and right child
if(root->left!=NULL && root->right!=NULL){
int min=mini(root->right);
root->data=min;
deletion(root->right,min);
return root;
}
}
else if(d < root->data){
    deletion(root->left,d);
    return root;
}
else {
    deletion(root->right,d);
    return root;
}
}

int main(){

    node *root = NULL;
    build(root);
    traverse(root);
    cout<<"inorder  ->";
    inorder(root);
    cout<<endl;
    cout<<"preorder  ->";
    preorder(root);
    cout<<endl;
    cout<<"postorder  ->";
    postorder(root);
    cout<<endl;
    int m=max(root);
    cout<<"maximum data in tree ->"<<m<<endl;
    int mi=mini(root);
    cout<<"minium data in tree ->"<<mi<<endl;
    
    cout<<"enter data which you want to deleted ->";
    int d;
    cin>>d;
    root = deletion(root,d);
    traverse(root);
    return 0;
}