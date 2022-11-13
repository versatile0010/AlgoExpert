using namespace std;

// This is the class of the input root. Do not edit it.
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

// O(n ; # of nodes)  time | O(n) space
void calc_sums(BinaryTree* node, int sum, vector<int>& sums){
  if(node == nullptr)
    return;
  int new_sum = sum + node->value;
  if(node->left==nullptr&&node->right==nullptr){    
    sums.push_back(new_sum);
    return;
  }
  calc_sums(node->left, new_sum, sums);
  calc_sums(node->right, new_sum, sums);
}

vector<int> branchSums(BinaryTree *root) {
  // Write your code here.
  vector<int> sums;
  calc_sums(root, 0, sums);
  return sums;
}
