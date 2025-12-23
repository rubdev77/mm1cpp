#ifndef SINGLELIST_H
#define SINGLELIST_H


namespace Rub
{

template <typename T>

class Node
{
    public:
    Node* next;
    T data;
    Node(T d) : next(nullptr), data(d) {}
};

template <typename T>

class List
{
    private:
    Node<T> * head;
    public:
    List() : head(nullptr) {}
    void push_front(const T& d) 
    {
        Node<T> * newNode = new Node<T>(d);
        newNode->next = head;
        head = newNode;
    }
    void pop_front()
    {
        if(head==nullptr) return;
        Node<T> * temp = head->next;
        delete head;
        head = temp;    
    }
    void push_back(const T& d)
    {
        Node<T> * newNode = new Node<T>(d);
        if(head==nullptr)
        {   
            head = newNode;
            return;
        }
        Node<T> * temp = head;
        while(temp->next!=nullptr)
        {
            temp = temp->next;
        }
        temp -> next = newNode;
    }
    void pop_back()
    {
        Node<T>* temp = head;
        if(head->next == nullptr)
        {
            delete head;
            head = nullptr; 
            return;
        }
        while(temp->next->next!=nullptr)
        {
            temp = temp -> next;
        }
        delete temp->next;
        temp -> next = nullptr;
    }
    void Print()
    {
        // std::cout << head->data << std::endl;
        Node<T> * temp = head;
        while(temp!=nullptr)
        {
            std::cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        std::cout << "NULL" << std::endl;
    }
};

}
#endif