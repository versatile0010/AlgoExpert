// Two Number Sum Solution 1
// Time complexity : O(N^2)
// Spae complexity : O(N) 
// 배열을 2번 탐색하여, 조건을 만족하는 pair 을 검출

#include <vector>

using namespace std;

// time  : O(N^2) 
// Space : O(1)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  vector<int> ans; int present = 0;
  for(int i = 0 ; i < array.size(); i++){
    present = array[i];
    for(int j = i+1  ; j < array.size(); j++){
      if(present + array[j] == targetSum){
        return {present, array[j]};
      }
    }
  }
  
  return ans;
}
