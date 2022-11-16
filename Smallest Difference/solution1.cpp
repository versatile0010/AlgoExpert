#include <vector>
using namespace std;

// O(nlogn+mlogm) time | O(1) space
vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  // Write your code here.
  vector<int> ans; int left_one = 0; int left_two = 0;
  int current_diff = INT_MAX; 
  int temp = INT_MAX; vector<int> smallest_pair;
  int One = 0; int Two = 0;
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());
  
  while(left_one < arrayOne.size() && left_two < arrayTwo.size()){
    One = arrayOne[left_one];
    Two = arrayTwo[left_two];
    if(One>Two){
      current_diff = One-Two;
      left_two++;
    }
    else if(One<Two){
      current_diff = Two-One;
      left_one++;
    }
    else
      return vector<int>{One, Two};
    if(current_diff < temp){
      smallest_pair = {One, Two};
      temp = current_diff;
    }
  }
  return smallest_pair;
}
