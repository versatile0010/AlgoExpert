using namespace std;

// time  : O(N)
// space : O(1)
bool isPalindrome(string str) {
	// Write your code here.
	int left = 0; int right = str.size() - 1;
	while (left < right) {
		if (str[left++] != str[right--]) return false;
	}
	return true;
}
