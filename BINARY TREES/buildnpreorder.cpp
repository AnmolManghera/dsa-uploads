#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data =d;
        left=NULL;
        right=NULL;
    }
};
node*buildTree(){
    int d;
    cin>>d;
    if(d ==-1){
        return NULL;
    }
    node*root =new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void preOrder(node*root){
    if(root ==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node*root){
    if(root ==NULL){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(node*root){
    if(root ==NULL){
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    
}
int height(node*root){
    //height == no of levels
    if(root == NULL){
        return 0;
    }
    int ls= height(root->left);
    int rs= height(root->right);
    return max(ls,rs)+1;
}
void printKthLevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;
}
void printAllLevels(node*root){
    int H = height(root);
    for(int i=1;i<=H;i++){
        printKthLevel(root,i);
        cout<<endl;
    }
    return;
}
void bfs(node*root){
    queue<node*>q;
    q.push(root );
    while(!q.empty()){
        node*f= q.front();
        cout<<f->data<<" , ";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
int count(node*root){
    if(root==NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}
int diameter(node*root){
    if(root == NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1+h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1,max(op1,op2));
}
int replaceSum(node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }
    //rec part
    int leftSum = replaceSum(root->left);
    int rightSum = replaceSum(root->right);
    int temp = root->data;
    root->data = leftSum+rightSum;
    return temp + root->data;
}
class HBPair{
    public:
    int height;
    bool balance;
};
HBPair isHeightBalancedd(node*root){
    HBPair p;
    if(root==NULL){
        p.height=0;
        p.balance=true;
    }
    //recursive case
    HBPair left = isHeightBalancedd(root->left);
    HBPair right = isHeightBalancedd(root->right);
    p.height = max(left.height,right.height)+1;
    if(abs(left.height - right.height)<=1 && left.balance && right.balance){
       p.balance=true;
    }
    else{
        p.balance=false;
    }
    return p;
}
int main()
{
    node*root =buildTree();
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    inOrder(root);
    return 0;
}