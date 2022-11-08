#include <any>

using namespace std;

int productSum(vector<any> array, int factor = 1) {
    // Write your code here.
    int ans = 0;
    for (auto ele : array) {
        if (ele.type() == typeid(vector<any>)) { // if element is a list
            ans += productSum(any_cast<vector<any>>(ele), factor + 1);
        }
        else { // if element is a integer
            ans += any_cast<int>(ele);
        }
    }
    return ans * factor;
}
