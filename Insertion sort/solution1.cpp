#include <vector>
using namespace std;

// O(n^2) time | O(1) space

vector<int> insertionSort(vector<int> array) {
	// Write your code here.
	
	for (int i = 1; i < array.size(); i++) {
		int t = array[i];
		int idx = i;
		while (idx > 0 && array[idx-1] > t) {
			array[idx] = array[idx-1];
			idx--;
		}
		array[idx] = t;
	}

	return array;
}

