#ifndef TREE_H
#define TREE_H
template <typename T>
class Node
{
    public:
    Node * left;
    Node * right;
    T data;
    bool hasNode(Node * root, T d);
    Node * insert(Node * root, T d);
    void inorder(Node * root);
    void preorder(Node * root);
    void postorder(Node * root);
};

template <typename T>
bool Node<T>::hasNode(Node<T> * root, T d)
{
    if(root == nullptr)
    {
        return false;
    }

    bool x = root -> data == d ? true : false;

    return x | hasNode(root -> left, d) || hasNode(root -> right, d);
}

template <typename T>
Node<T> * Node<T>::insert(Node<T> * root, T d)
{
    if(root == nullptr)
    {
        Node<T> * temp = new Node<T>;
        temp -> right = nullptr;
        temp -> left = nullptr;
        temp -> data = d;
        return temp;
    }
    if(d < root -> data)
    {
        root -> left = insert(root -> left, d);
        return root;
    }
    else if(d > root -> data)
    {
        root -> right = insert(root -> right, d);
        return root;
    }
    else
    {
        return root;
    }
}

template <typename T>

void Node<T>::inorder(Node<T> * root)
{
    if(root == nullptr)
    return;

    inorder(root -> left);
    std::cout << root -> data << std::endl;
    inorder(root -> right);
}

template <typename T>

void Node<T>::preorder(Node<T> * root)
{
    if(root == nullptr)
    return;

    std::cout << root -> data << std::endl;
    preorder(root -> left);
    preorder(root -> right);
}

template <typename T>

void Node<T>::postorder(Node<T> * root)
{
    if(root == nullptr)
    return;

    postorder(root -> left);
    postorder(root -> right);
    std::cout << root -> data << std::endl;
}


#endif