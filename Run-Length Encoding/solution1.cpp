// Run-Length Encoding 
// time  : O(N)
// space : O(N)

string runLengthEncoding(string str) {
	// Write your code here.
	vector<char> encodes;
	int curr_len = 1;
	char curr_ele = '0';
	char prev_ele = '0';
	for (int i = 1; i < str.size(); i++) {
		curr_ele = str[i];
		prev_ele = str[i - 1];
		if (curr_ele != prev_ele || curr_len == 9) {
			encodes.push_back(to_string(curr_len)[0]);
			encodes.push_back(prev_ele);
			curr_len = 0;
		}
		curr_len++;
	}
	encodes.push_back(to_string(curr_len)[0]);
	encodes.push_back(str[str.size()-1]);
	
	return string(encodes.begin(), encodes.end());
}
