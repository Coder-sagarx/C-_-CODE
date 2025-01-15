#include <iostream> //insert bst tree+
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
node *insertnode(node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d > root->data)
    {
         root->right = insertnode(root->right, d);
    }
    else
    {
       root->left = insertnode(root->left, d);
    }
    return root;
}

void build(node *root)
{
    int d;
    cout << "enter data  ->";
    cin >> d;
    while (d != -1)
    {
        root = insertnode(root, d);
        cin >> d;
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
            cout << temp->data;
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

int main()
{
    node *root = NULL;
    build(root);
    traverse(root);
    return 0;
}