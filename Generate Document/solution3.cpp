// time  : O(n + m)
// space : O(c)
// n = # of characters
// m = # of documnets
// c = # of unique elements in the character string

bool generateDocument(string characters, string document) {
	// Write your code here.
	unordered_map<char, int> char_m;
	for (char ele : characters) {
		if (char_m.find(ele) == char_m.end()) {
			char_m[ele] = 0;
		}
      char_m[ele]++;
	}
	for (char ele : document) {
		if (char_m.find(ele) == char_m.end() || char_m[ele] == 0) {
			return false;
		}
		char_m[ele]--;
	}
	return true;
}
