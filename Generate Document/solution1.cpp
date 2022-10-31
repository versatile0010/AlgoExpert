// time : O(m * (n+m))
// m = length of document, n = # of characters
// space : O(1)

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
	int characters_frequency = 0;
	int document_frequency = 0;

	for (auto ele : document) {
		characters_frequency = get_frequencey(ele, characters);
		document_frequency = get_frequencey(ele, document);

		if (characters_frequency < document_frequency)
			return false;
	}

	return true;
}
