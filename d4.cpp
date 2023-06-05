#include<iostream>
#include<cstdlib>
using namespace std;
class node{
    public:
        node *left;
        node *right;
        string word;
        string meaning;

};

class Dict{
    public:
    node* root;
        Dict(){
            root=NULL;
        }
    void create();
    void insert(node*,node*);

};
void Dict::create(){
    node* temp;
    temp=new node();
    cout<<"Enter the word:"<<endl;
    cin>>temp->word;
    cout<<"Enter the Meaning:"<<endl;
    cin>>temp->meaning;

    temp->left = temp->right = NULL;
    if(root== NULL)
    {
        root=temp;
    }
    else {
        insert(temp,root);
    }

}
void Dict::insert(node *temp, node *root){

}
int main()
{
    Dict d1;
    d1.create();
    d1.insert(temp,root);
    
    return 0;
}