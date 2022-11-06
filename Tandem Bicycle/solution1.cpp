#include <vector>
using namespace std;

// time  : O(nlog(n))
// space : O(1)
int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
                  bool fastest) {
  // Write your code here.
  int size = redShirtSpeeds.size(); 
  int ans = 0;
  sort(redShirtSpeeds.begin(), redShirtSpeeds.end());
  sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());

  if(fastest == true){
    for(int i = 0 ; i < size; i++){
      ans+=max(redShirtSpeeds[size-i-1], blueShirtSpeeds[i]);
    }
  } else{
    for(int i = 0 ; i < size; i++){
      ans+=max(redShirtSpeeds[i], blueShirtSpeeds[i]);
    }
  }
  
  return ans;
}
