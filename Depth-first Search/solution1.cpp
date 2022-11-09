#include <vector>
using namespace std;

// O(V+E) time | O(V) space
class Node {
public:
  string name;
  vector<Node *> children;

  Node(string str) { name = str; }

  vector<string> depthFirstSearch(vector<string> *array) {
    // Write your code here.
    array->push_back(this->name);
    for(auto child: this->children)
      child->depthFirstSearch(array);
    return *array;
  }

  Node *addChild(string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};
