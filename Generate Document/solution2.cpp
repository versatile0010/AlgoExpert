// time : O(c * (n+m))
// m = length of document, n = # of characters
// space : O(c) // c is # of unique characters

int get_frequencey(char character, string target) {
	int frequency = 0;
	for (char ele : target) {
		if (character == ele) {
			frequency++;
		}
	}
	return frequency;
}

bool generateDocument(string characters, string document) {
	// Write your code here.
    unordered_set<char> s;
	int characters_frequency = 0;
	int document_frequency = 0;

	for (auto ele : document) {
        if(s.find(ele) != s.end()){
          // already counted.
          continue;
        }
		characters_frequency = get_frequencey(ele, characters);
		document_frequency = get_frequencey(ele, document);

		if (characters_frequency < document_frequency)
			return false;
        s.insert(ele);
	}

	return true;
}
