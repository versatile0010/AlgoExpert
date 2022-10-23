using namespace std;

// time  : O(N)
// space : O(1)

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
  int sequence_idx = 0;
  for(int i = 0 ; i <array.size(); i++){
    if(sequence_idx == sequence.size())
      break;
    if(sequence[sequence_idx] == array[i])
      sequence_idx++;
  }
  return sequence_idx == sequence.size();
}
