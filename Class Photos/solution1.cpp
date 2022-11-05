#include <vector>
using namespace std;

// O(nlog(n)) time | O(1) space
bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  // Write your code here.
  int size = redShirtHeights.size();
  string front_color = "";
  sort(redShirtHeights.begin(), redShirtHeights.end());
  sort(blueShirtHeights.begin(), blueShirtHeights.end());

  front_color = redShirtHeights[0] < blueShirtHeights[0] ? "RED" : "BLUE";

  for(int i = 0; i < size ; i++){
    if(front_color == "RED"){
      if(redShirtHeights[i] >= blueShirtHeights[i])
        return false;
    } else{
      if(blueShirtHeights[i] >= redShirtHeights[i])
        return false;
    }
  }
  
  return true;
}
