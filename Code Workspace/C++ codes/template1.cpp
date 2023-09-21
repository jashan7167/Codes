#include<iostream>

using namespace std;

template<typename T>
class Node
{
private:
T data;
Node<T>*next;
template<typename U>friend class linkedlist;
public:
Node()
{
        this->next = NULL;
}
};

template<typename T>class linkedlist
{
    private:
    Node<T>*head;
    public:
    linkedlist()
    {
        this->head = NULL;
    }
    void add(T item)
    {
        Node<T>*node = new Node<T>[1];
        if(head==NULL)
        {
            node->data = item;
              head=node;
              cout<<"First Node Added"<<endl;
        }
        else
        {
            node->next = head;
            node->data = item;
            head = node;
            cout<<"New Node Added At Front"<<endl;
        }
    }
    void remove(T item)
    {
        Node<T>*ptr;
        Node<T>*preptr;
        Node<T>*temp;
        while(ptr->data!=item)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        temp = ptr;
        preptr ->next= ptr->next;
        delete(ptr);
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
};


int main()
{
    linkedlist<int> L1;
    int n;
    cout<<"Enter the no of items you want to add in the linked list(int): ";
    cin>>n;
    int el;
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the item: ";
        cin>>el;
        L1.add(el);
    }
    L1.display();
}