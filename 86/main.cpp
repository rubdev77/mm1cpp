#include <iostream>
#include <stack>
#include "Tree.h"
#include "Set.h"

int main()
{
    Set<int> a;
    a.add(1);
    a.add(4);
    a.add(5);
    a.add(-3);
    a.add(-4);

    a.preorderTraversal();
    std::cout << std::endl;
    a.inorderTraversal();
    std::cout << std::endl;
    a.postorderTraversal();
}