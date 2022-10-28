using namespace std;

// time  : O(N)
// space : O(N)

char get_new_letter(string source, char old, int key) {
	int new_idx = source.find(old) + key;
	return source[new_idx % 26];
}

string caesarCypherEncryptor(string str, int key) {
	// Write your code here.
	vector<char> newStr;
	string source = "abcdefghijklmnopqrstuvwxyz";
	for (char ele : str) {
		newStr.push_back(get_new_letter(source, ele, key));
	}
	return string(newStr.begin(), newStr.end());
}
