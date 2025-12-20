#ifndef SINGLELIST_H
#define SINGLELIST_H

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
    void add(T d) 
    {
        Node<T> * newNode = new Node<T>(d);
        newNode->next = head;
        head = newNode;
    }
    void Print()
    {
        Node<T> * temp = head;
        while(temp!=nullptr)
        {
            std::cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        std::cout << "NULL" << std::endl;
    }
};

#endif