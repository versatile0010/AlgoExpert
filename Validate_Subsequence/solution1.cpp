using namespace std;

// time  : O(N)
// space : O(1)

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
  int array_idx = 0;
  int sequence_idx = 0;
  while(array_idx < array.size() && sequence_idx < sequence.size()){
    if(array[array_idx] == sequence[sequence_idx]){
      sequence_idx++;
    }
    array_idx++;
  }
  return sequence_idx == sequence.size();
}
