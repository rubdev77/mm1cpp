#ifndef TREE_H
#define TREE_H
template <typename T>
class TreeNode
{
    public:
    T val;
    Vector<TreeNode*> arr;
    TreeNode(const T& v) : val(v) {}
    void addChild(TreeNode<T> * child);
};

template <typename T>
class Tree
{
    public:
    TreeNode<T> * root = nullptr;
    public:
    Tree(TreeNode<T>* r) : root(r) {}
    void Print() const;
};

template <typename T>
void TreeNode<T>::addChild(TreeNode<T> * child)
{
    arr.push_back(child);  
}


#endif