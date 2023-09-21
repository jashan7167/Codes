#include<iostream>
using namespace std;

template<typename T>
class Node
{
    private:
    T data;
    Node<T>*next;
    Node<T> *prev;
    public:
    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }
    template<typename U>friend class doublylist;

};

template<typename T>
class doublylist
{
    private:
    Node<T>*head;
    Node<T>*tail;
    public:
    doublylist()
    {
        this->head = NULL;
        this->tail= NULL;
    }
    void add()
    {
        T val;
        Node<T>*node = new Node<T>[1];
        if(head==NULL && tail==NULL)
        {
            cin>>val;
                   node->data = val;
                   node->next = NULL;
                   node->prev = NULL;
                   head = tail = node;
                   cout<<"First Node Added"<<endl;
        }
        else
        {
            cin>>val;
            node->data = val;
            node->next = head;
            node->prev = NULL;
            head->prev = node;
            head = node;
        }
    }
      void display()
    {
        Node<T>*ptr;
        ptr = head;
        while(ptr!=NULL)
        {
         cout<<"Data = "<<ptr->data<<endl;  
         ptr = ptr->next;
        }
    }
    void revdisplay()
    {
             Node<T>*ptr;
        ptr = tail;
        while(ptr!=NULL)
        {
         cout<<"Data = "<<ptr->data<<endl;  
         ptr = ptr->prev;
        }
    }

};
int main()
{
        int n;
    cout<<"how many elements do you want to add: ";
    cin>>n;
doublylist<int> L1;
for(int i = 0 ; i <  n ; i++)
{
    L1.add();
}
L1.display();
L1.revdisplay();
}