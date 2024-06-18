#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
        std::vector<std::pair<int, int>> jobProfile;
        jobProfile.push_back({0, 0});

        // Create job profiles with profit and difficulty
        for (int i = 0; i < difficulty.size(); i++) {
            jobProfile.push_back({profit[i], difficulty[i]});
        }

        // Sort job profiles by profit in decreasing order
        std::sort(jobProfile.begin(), jobProfile.end(), std::greater<std::pair<int, int>>());

        // Ensure difficulty is non-decreasing as we traverse job profiles
        for (int i = 0; i < jobProfile.size() - 1; i++) {
            jobProfile[i + 1].second = std::min(jobProfile[i].second, jobProfile[i + 1].second);
        }

        int netProfit = 0;

        // Calculate the maximum profit for each worker
        for (int i = 0; i < worker.size(); i++) {
            int l = 0;
            int r = jobProfile.size() - 1;
            int jobProfit = 0;

            // Binary search to find the best job for the current worker
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (jobProfile[mid].second <= worker[i]) {
                    jobProfit = std::max(jobProfit, jobProfile[mid].first);
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            netProfit += jobProfit;
        }

        return netProfit;
    }
};
