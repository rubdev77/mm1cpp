#include <iostream>
#include "Queue.h"
#include "Tree.h"


template <typename T>
void Print(TreeNode<T> * root)
{
    Queue<TreeNode<T> *> q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode<T> * temp = q.front();
        q.pop();
        for(auto i = 0; i < temp->arr.size(); i++)
        {
            q.push(temp->arr[i]); 
        }
        std::cout << "Val = " << temp -> val << std::endl;
    }
}

int main()
{
    TreeNode<int> * root = new TreeNode<int>(1);
    Tree<int> tree(root);
    TreeNode<int> * node1 = new TreeNode<int>(1);
    TreeNode<int> * node2 = new TreeNode<int>(1);
    TreeNode<int> * node3 = new TreeNode<int>(1);
    TreeNode<int> * node4 = new TreeNode<int>(2);
    TreeNode<int> * node5 = new TreeNode<int>(1);


    root->addChild(node1);
    root->addChild(node2);
    node1->addChild(node3);
    node1->addChild(node4);
    node2->addChild(node5);

    Print<int>(root);

    return 0;
}
