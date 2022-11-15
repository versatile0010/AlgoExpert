#include <vector>
using namespace std;

// O(n^2) time | O(n) space
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  vector<vector<int>> ans;
  sort(array.begin(), array.end());
  int left = 0; int right = 0; int present_sum = 0;
  for(int i = 0 ; i < array.size()-2; i++){
    left = i+1;
    right = array.size()-1;
    while(left<right){
      present_sum = array[i]+array[left]+array[right];
      if(present_sum == targetSum){
        ans.push_back({array[i], array[left], array[right]});
        left++;
        right--;
      }
      else if(present_sum < targetSum){
        left++;
      }
      else if(present_sum > targetSum){
        right--;
      }
    }
  }
  return ans;
}
