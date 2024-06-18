#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
        std::vector<std::pair<int, int>> jobProfile;
        jobProfile.push_back({0, 0}); // Initial dummy job
        
        // Create job profiles with difficulty and profit
        for (int i = 0; i < difficulty.size(); i++) {
            jobProfile.push_back({difficulty[i], profit[i]});
        }

        // Sort job profiles by difficulty
        std::sort(jobProfile.begin(), jobProfile.end());
        
        // Sort worker capabilities
        std::sort(worker.begin(), worker.end());

        int netProfit = 0;
        int maxProfit = 0;
        int index = 0;

        // Calculate the maximum profit for each worker
        for (int i = 0; i < worker.size(); i++) {
            while (index < jobProfile.size() && jobProfile[index].first <= worker[i]) {
                maxProfit = std::max(maxProfit, jobProfile[index].second);
                index++;
            }
            netProfit += maxProfit;
        }

        return netProfit;
    }
};
