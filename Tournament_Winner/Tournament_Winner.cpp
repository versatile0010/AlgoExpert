#include <vector>
using namespace std;

// Time  : O(N) (N is # of competitions)
// Space : O(k) (k is # of teams) ~ hash map

string tournamentWinner(vector<vector<string>> competitions,
    vector<int> results) {
    // Write your code here.
    unordered_map<string, int> m;
    for (vector<string> ele : competitions) {
        m.insert({ ele[0], 0 });
        m.insert({ ele[1], 0 });
    }
    for (int i = 0; i < competitions.size(); i++) {
        if (results[i] == 1) {
            // home team win
            m[competitions[i][0]] += 3;
        }
        else {
            // away team win
            m[competitions[i][1]] += 3;
        }
    }
    string winner = ""; int max_pt = -1;
    for (auto ele : m) {
        if (ele.second > max_pt) {
            max_pt = ele.second;
            winner = ele.first;
        }
    }
    return winner;
}
