#ifndef SET_H
#define SET_H
template <typename T>
class Set
{
    std::size_t size;
    Node<T> * root;

    public:
    Set();
    Set(const Set &);

    void add(const T d);
    bool has(T d);
    T* toArr();
    std::size_t getsize();
    void inorderTraversal();
    void preorderTraversal();
    void postorderTraversal();
};

template <typename T>

Set<T>::Set()
{
    size = 0;
    root = nullptr;
}

template <typename T>
Set<T>::Set(const Set<T> & other)
{
    this -> size = other.size;
    this -> root = other.root;
}

template <typename T>
void Set<T>::add(const T d)
{
    if(!root->hasNode(root, d) || root==nullptr)
    {
        root = root -> insert(root, d);
        this -> size++;
    }
}

template <typename T>
bool Set<T>::has(T d)
{
    if(root == nullptr) return false;
    return root -> hasNode(root, d) ? true : false;
}


template <typename T>
T * Set<T>::toArr()
{
    if(size == 0) return nullptr;
    T * A = new T[size];
    std::size_t i = 0;
    std::stack<Node<T> *> s;
    s.push(this -> root);

    while(!s.empty())
    {
        Node<T> * node = s.top();
        s.pop();

        A[i++] = node -> data;

        if(node -> right)
        {
            s.push(node -> right);
        }

        if(node -> left)
        {
            s.push(node -> left);
        }
    }

    return A;
}

template <typename T>
std::size_t Set<T>::getsize()
{
    return this -> size;
}

template <typename T>
void Set<T>::inorderTraversal()
{
    if(root != nullptr)
    root -> inorder(root);
}

template <typename T>
void Set<T>::preorderTraversal()
{
    if(root!=nullptr)
    root -> preorder(root);
}

template <typename T>
void Set<T>::postorderTraversal()
{
    if(root != nullptr)
    root -> postorder(root);
}

#endif