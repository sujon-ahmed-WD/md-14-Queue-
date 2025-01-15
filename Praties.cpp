#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return ;
        }

        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {
       Node*deletenode=head;
       if(head==NULL)
       {
            tail=NULL;
            return;
       }
       head=head->next;
       delete deletenode;

    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }

    bool empty()
    {
        return head==NULL;
    }
};
int main()
{
    MyQueue q;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;cin>>val;
        q.push(val);
    }
    cout<<q.front()<<" "<<q.back()<<q.size()<<
    
    return 0;
}