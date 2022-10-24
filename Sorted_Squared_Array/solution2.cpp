#include <vector>
using namespace std;
// time :  O(N)
// space : O(N)
vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  vector<int> ans(array.size());
  int right = array.size()-1; int left = 0;
  for(int i = array.size()-1; i >= 0 ; i--){
    if(abs(array[left]) > abs(array[right])){
      ans[i] = array[left]*array[left];
      left++;
    }
    else{
      ans[i] = array[right]*array[right];
      right--;
    }
  }
  return ans;
}
