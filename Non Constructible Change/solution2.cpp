#include <vector>
using namespace std;

// solution2.cpp
// time  :  O(nlogn)
// space :  O(1)

int nonConstructibleChange(vector<int> coins) {
	// Write your code here.
	sort(coins.begin(), coins.end());
	int current_sum = 0;
	for (int i = 0; i < coins.size(); i++) {
		if (coins[i] > current_sum + 1)
			return current_sum + 1;
		current_sum += coins[i];
	}
	return current_sum + 1;
}
