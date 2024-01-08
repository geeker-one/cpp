#include <iostream>
#include <vector>

#include "Tree.h"
using namespace std;

int main() {
  std::vector<int> arr = {1, 2, 2, 3, 4, 4, 3};
  TreeNode *root = CreateTree(arr, 0);
  // PreOrderTraversal(root);
  // cout << endl;
  // InOrderTraversal(root);
  // cout << endl;
  // PostOrderTraversal(root);
  // cout << endl;
  InOrderTraversal_Iter(root);
  return 0;
}
