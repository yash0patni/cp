#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

node* newnode(int d)
{
    node* temp = new node();
    temp->data = d;
    temp->left = temp->right = NULL;
    return temp;    
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int t, x;
    cin >> t >> x;
    --t;
    node *root = newnode(x);
    node *temp = root;
    string s;
    while (t--)
    {
        temp = root;
        cin >> s;
        int i;
        for (i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'L')
                temp = temp->left;
            else
                temp = temp->right;
        }
        cin >> x;
        node *n = newnode(x);
        if (s[i] == 'L')
            temp->left = n;
        else
            temp->right = n;
    }
    inorder(root);
    cout << endl;
    
    return 0;
}