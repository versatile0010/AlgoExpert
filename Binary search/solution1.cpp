#include <vector>
using namespace std;

// O(log(n)) time | O(1) space

int binarySearch(vector<int> array, int target) {
	// Write your code here.
	int left = 0; int right = array.size() - 1;
	sort(array.begin(), array.end());
  
	while (left <= right) {
        int mid = (left + right) / 2;
		if (array[mid] == target) {
			return mid;
		}
		else if (array[mid] < target) {
			left = mid+1;
		}
		else { // array[mid] > target 
			right = mid-1;
		}
	}

	return -1;
}

