using namespace std;

// O(nlogn) time | O(1) space
int minimumWaitingTime(vector<int> queries) {
  // Write your code here.
  int ans = 0; int max_ele = 0;
  sort(queries.begin(), queries.end());
  for(int i = 0 ; i < queries.size()-1; i++){
    ans += (queries[i] * (queries.size()-1-i)); 
  }
  
  return ans;
}
