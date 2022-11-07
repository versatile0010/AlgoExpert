using namespace std;

// O(N) time | O(N) space

int getNthFib(int n) {
  // Write your code here.
  int* dp = (int*)calloc(n+1, sizeof(int));
  dp[1] = 0;
  dp[2] = 1;

  for(int i = 3 ; i <= n; i++){
    dp[i] = dp[i-1]+dp[i-2];
  }
  
  return dp[n];
}
