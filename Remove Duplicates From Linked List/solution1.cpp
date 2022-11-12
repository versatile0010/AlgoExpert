using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

// O(n : number of nodes in the LL) time | O(1) space
LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  // Write your code here.
  int prev_val = 0; int next_val = 0;
  LinkedList* current_node = linkedList;
  
  while(current_node != nullptr){
  LinkedList* next_node = current_node->next;
    while(next_node!=nullptr&&current_node->value==next_node->value) {
      next_node = next_node->next;
    }
    current_node->next = next_node;
    current_node = current_node->next;
  }

  return linkedList;
}
