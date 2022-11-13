#include <stack>

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

struct NODE{
  BinaryTree* _root;
  int _depth;
};
// O(n; # of nodes) time
// O(h; height of binary tree) space
int nodeDepths(BinaryTree *root) {
  // Write your code here.
  int sums = 0 ;
  stack<NODE> st;
  st.push({root, 0});
  while(!st.empty()){
    BinaryTree* present_node = st.top()._root;
    int depth = st.top()._depth;
    st.pop();
    if(present_node == nullptr)
      continue;
    sums += depth;
    st.push({present_node->left, depth+1});
    st.push({present_node->right, depth+1});
  }

  return sums;
}

