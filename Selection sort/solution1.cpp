// O(n^2) time | O(1) space

vector<int> selectionSort(vector<int> array) {
	// Write your code here.
	if (array.empty()) return{};
	for (int i = 0; i < array.size()-1; i++) {
		int min = array[i]; int idx = i; int t = array[i];
		for (int j = i + 1; j < array.size(); j++) {
			if (array[j] < min) {
				min = array[j];
				idx = j;
			}
		}
		array[i] = min;
		array[idx] = t;
	}

	return array;
}
