class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

// O(log(n)) time | O(1) space
int findClosestValueInBst(BST *tree, int target) {
  // Write your code here.
  int closet = tree->value;
  while(tree != nullptr){
    if(abs(target-closet) > abs(target-tree->value))
      closet = tree->value;
    if(tree->value < target){
      tree = tree->right;
    }
    else if(tree->value>target){
      tree = tree->left;
    }
    else
      break;
  }
  return (int)closet;
}
