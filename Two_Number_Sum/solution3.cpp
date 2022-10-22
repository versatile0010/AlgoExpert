// Two Number Sum solution3
// Two pointers Algorithm

#include <vector>
#include <algorithm>

using namespace std;
// time  : O(NlogN) || N is length of array
// Space : O(1)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  sort(array.begin(), array.end()); int current = 0;
  int left = 0; int right = array.size()-1;
  while(left<right){
    current = array[left]+array[right];
    if(current == targetSum) return {array[left], array[right]};
    else if(current < targetSum){
      left++;
    }
    else if(current > targetSum){
      right--;
    }
  }
  return {};
}
