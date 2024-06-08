#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n = skills.size();
        vector<int> player(n);
        for (int i = 0; i < n; ++i) {
            player[i] = i;
        }

        int wins = 0;
        int curr_player = player[0];
        int i = 1;

        while (i < n && wins < k) {
            if (skills[curr_player] > skills[player[i]]) {
                player.push_back(player[i]);
                wins++;
            } else {
                wins = 1;
                player.push_back(curr_player);
                curr_player = player[i];
            }
            i++;
        }

        return curr_player;
    }
};

// Test the function
int main() {
    Solution solution;
    vector<int> skills = {1, 3, 5, 2, 4};
    int k = 3;
    int winner = solution.findWinningPlayer(skills, k);
    cout << "Winner: " << winner << endl; // Expected output: 2
    return 0;
}
