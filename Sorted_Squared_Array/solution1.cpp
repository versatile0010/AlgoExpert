#include <vector>
using namespace std;
// time :  O(NlogN)
// space : O(N)
vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  vector<int> ans;
  for(auto ele : array){
    ans.push_back(ele*ele);
  }
  sort(ans.begin(), ans.end());
  return ans;
}
