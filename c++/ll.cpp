#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
class singlelinkedlist
{
    private:
        node* head;
    public:
        singlelinkedlist(){
            head=nullptr()
        }
    traverse(node* head);

};
int traverse(node*head){
    node* temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}