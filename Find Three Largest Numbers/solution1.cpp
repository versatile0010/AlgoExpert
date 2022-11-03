#include <vector>
using namespace std;

// O(n) time | O(1) space

void shift(vector<int> &ans, int st){
	for (int i = 0; i < st; i++){
		ans[i] = ans[i + 1];
	}
}

vector<int> findThreeLargestNumbers(vector<int> array) {
	// Write your code here.
	vector<int> ans(3, INT_MIN);

	ans[2] = array[0]; int target = 0;
	for (int i = 1; i < array.size(); i++) {
		target = array[i];
		if (target > ans[2]) {
			shift(ans, 2);
			ans[2] = target;
		}
		else if (target > ans[1]) {
			shift(ans, 1);
			ans[1] = target;
		}
		else if (target > ans[0]) {
			ans[0] = target;
		}
	}
	return ans;
}
