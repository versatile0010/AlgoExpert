using namespace std;

// time  : O(N)
// space : O(N)

bool isPalindrome(string str) {
	// Write your code here.
	string reverse = "";
	for (int i = str.size() - 1; i >= 0; i--) {
		reverse.push_back(str[i]);
	}
	if (str == reverse) return true;
	return false;
}
