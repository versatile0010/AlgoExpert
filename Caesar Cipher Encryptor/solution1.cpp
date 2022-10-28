using namespace std;

// time  : O(N)
// space : O(N)

string caesarCypherEncryptor(string str, int key) {
	// Write your code here.
	string ans = "";
    key = key%26;
	for (char ele : str) {
		if ((unsigned int)(ele + key) > 'z') {
			ans.push_back(ele + key - 'z' + 'a'-1);
		}
		else {
			ans.push_back(ele + key);
		}
	}
	return ans;
}
