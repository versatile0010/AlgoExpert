using namespace std;

// time  : O(N)
// space : O(26) = O(1)

int firstNonRepeatingCharacter(string string) {
	// Write your code here.
	unordered_map<char, int> m;
	for (auto ele : string) {
		if (m.find(ele) == m.end())
			m[ele]++;
		else
			m[ele] = 0;
	}
	for (int i = 0; i < string.size(); i++) {
		if (m[string[i]] == 1) {
			return i;
		}
	}

	return -1;
}
