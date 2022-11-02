// O(n^2) time | O(1) Space

vector<int> bubbleSort(vector<int> array) {
	// Write your code here.
    if(array.empty()) return {};
	int temp = 0;
	for (int i = 0; i < array.size()-1; i++) {
		for (int j = i + 1; j < array.size(); j++) {
			if (array[i] > array[j]) {
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
	return array;
}
