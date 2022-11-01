using namespace std;

// time  : O(n^2)
// space : O(1)

int firstNonRepeatingCharacter(string string) {
	// Write your code here.
	int i = 0; int j = 0;
	for (i = 0; i < string.size(); i++) {
      bool isitrepeated = false; 
		for (j = 0; j < string.size(); j++) {
			if (string[i] == string[j] && i != j) {
				isitrepeated = true;
				break;
			}
		}
		if (!isitrepeated) {
			return i;
		}
	}
	return -1;
}
