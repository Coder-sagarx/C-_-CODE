//lowest comman ansestor
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
        this->left = NULL;
        this->right = NULL;
        this->data = d;
    }
};
// tree built
node *treebuild(node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for inserting in left :" << data << endl;
    root->left = treebuild(root->left);
    cout << "enter data for inserting in right :" << data << endl;
    root->right = treebuild(root->right);

    return root;
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
        }
    }
}
// node* lca(node* root,int p,int q){
// if(root==NULL){
//     return NULL;
// }
// if(p>root->data&&q>root->data){
//     lca(root->right,p,q);
// }
// if(p<root->data&&q<root->data){
//     lca(root->left,p,q);
// }
// if(root->data>p && root->data<q){
// return root;
// }
// }
node* lca(node* root,int p,int q){
 while(root!=NULL){
    if(root->data<p && root->data<q){
        root=root->right;
    }
    else if(root->data>p && root->data>q){
        root=root->left;
    }
    else{
        return root;
    }
 }
}
int main(){
    node* root=NULL;
    root=treebuild(root);
    traverse(root);
    int  p,q;
    cout<<"enter data which you want to know the lowest ansistor od that data  ->";
    cin>>p>>q;
    node* temp;
    temp=lca(root,p,q);
    cout<<"the comman ansestor node  ->"<<temp->data;

    return 0;

}