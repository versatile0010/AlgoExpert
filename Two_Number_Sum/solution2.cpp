// Two Number Sum Soltion 2
// hash table 을 이용한 풀이

#include <vector>
#include <unordered_set>
using namespace std;

// time  : O(N) || N is length of array
// Space : O(N)
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  unordered_set<int> s(array.begin(), array.end()); int candidate=0;
  for(auto ele : array){
    candidate = targetSum-ele;
    if(s.find(candidate)!=s.end() && candidate != ele)
      return {ele, targetSum-ele};
  }
  
  return {};
}
