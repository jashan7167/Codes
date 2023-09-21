#include<iostream>
using namespace std;

template<typename T>
class Node
{
    private:
    T data;
    Node<T>*next;
    Node( )
    {
        this->next = NULL;
    }
    template<typename U>friend class linkedlist;
};
template<typename T>
class linkedlist
{
    public:
    Node<T> *head;
    linkedlist()
    {
        this->head = NULL;
    }
    void addnode()
    {
        T val;
        Node<T>*node = new Node<T>[1];
        if(head == NULL)
        {
        cin>>val;
            node->data =  val;
            head = node;
            cout<<"First Node Added"<<endl;
        }
        else
        {
            cin>>val;
            node->data = val;
            node->next = head;
            head = node;
            cout<<"Node added at front"<<endl;
        }
    }
    void remove()
    {
        T val;
        cin>>val;
        Node<T>*ptr = head;
        Node<T>*preptr;
        while(ptr->next != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr = ptr->next;
        free(ptr);
            }
        void display()
            {
                Node<T>*ptr = head;
                while(ptr!=NULL)
                {
                    cout<<"Data =  "<<ptr->data<<endl;
                    ptr = ptr->next;
                }
            }
};

int main()
{
    int n;
    cout<<"how many elements do you want to add: ";
    cin>>n;
linkedlist<int> L1;
for(int i = 0 ; i <  n ; i++)
{
    L1.addnode();
}
L1.display();


}