#include <vector>
using namespace std;
/*
[ Solution 1 : brute - force ] 
time  : O(NM) // N is # of coins, M is max_sum
space : O(1)
먼저 coins 배열을 오름차순으로 정렬한 뒤,
coins 의 원소를 모두 더한 max_sum 을 구한다.
그러면, 답이 될 수 있는 범위는 [1, max_sum+1] 이다.
풀이를 위해서 2중 루프를 사용한다.
outer loop 의 index 인 i 는 1~ max_sum-1 까지  
inner loop 의 index 인 j 는 coins 의 원소를 뒤에서 부터 순회한다.

* current_coin 이 current_sum 보다 작거나 같은 경우 current_sum 에서 current_coin 을 subtract
* curretn_sum == 0 이면 inner loop 를 탈출
* inner loop 를 탈출했는데 current_sum > 0 이라면, i 가 non-constructible change 이므로 return i 해주면 된다.
* 이중 loop 를 탈출하게 되면, max_sum 까지 constructible change 이므로 max_sum+1 을 반환하면 된다.
*/
int nonConstructibleChange(vector<int> coins) {
	// Write your code here.
	int max_sum = 0;
	int current_coin = 0;
	int current_sum = 0;
	sort(coins.begin(), coins.end());
	for (auto ele : coins) {
		max_sum += ele;
	}
	for (int i = 1; i < max_sum; i++) {
		current_sum = i;
		for (int j = coins.size() - 1; j >= 0; j--) {
			current_coin = coins[j];
			if (current_coin <= current_sum) {
				current_sum -= current_coin;
			}
			if (current_sum == 0) {
				break;
			}
		}
		if (current_sum > 0) {
          return i;
		}
	}
	return max_sum+1;
}
