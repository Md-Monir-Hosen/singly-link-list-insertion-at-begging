#include <iostream>
using namespace std;
void biginsert(int);
struct node {
int data;
struct node *next;
};
struct node *head;
int main()
{
    int item,pos;
    while(pos==NULL)
    {
    cout<<"enter item";
    cin>>item;
    biginsert(item);
    cout<<"enter position";
    cin>>pos;

    }
}
void biginsert(int item)
{

    struct node *newnode=new node();
    if(newnode==NULL)
    {
        cout<<"overflow";
    }
    else
    {

        newnode->data=item;
        newnode->next=head;
        head=newnode;
        cout<<"element is inserted";
    }
}
