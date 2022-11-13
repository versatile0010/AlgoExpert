using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

// O(n; # of nodes) time
// O(h; height of binary tree) space
int nodeDepths(BinaryTree *root, int depth=0) {
  // Write your code here.
  if(root == nullptr)
    return 0;
  return depth + nodeDepths(root->left, depth+1) + nodeDepths(root->right, depth+1);
  return -1;
}
