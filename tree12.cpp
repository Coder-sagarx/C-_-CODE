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
int kthsmallestelement(node *root, int k, int& i)
{
    // base case
    if (root == NULL)
    {
        return -1;
    }
    int left = kthsmallestelement(root->left, k, i);
    if (left != -1)
    {
        return left;
    }
    i++;
    if (i == k)
    {
        return root->data;
    }
    return kthsmallestelement(root->right, k, i);
}
 
int main()
{
    node *root = NULL;
    root= treebuild(root);
    traverse(root);
    cout << " what position smallest element ";

    int k,i;
    cin >> k;
    int x = kthsmallestelement(root, k, i);
    cout << "the " << k << " smallest element  ->" << x << endl;

    return 0;
}
