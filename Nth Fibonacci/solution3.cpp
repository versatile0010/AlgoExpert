using namespace std;

// O(n) time | O(1) space

int getNthFib(int n) {
  // Write your code here.
  int base[] = {0, 1};
  int cnt = 3;
  int prev = 0; int next = 0;
  while(cnt <= n){
    next = base[0]+base[1];
    base[0] = base[1];
    base[1] = next;
    cnt++;
  }
  if(n==1) return 0;
  return base[1];
}
