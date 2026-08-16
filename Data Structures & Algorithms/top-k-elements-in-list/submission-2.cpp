class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Count frequency
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Store {element, frequency}
        vector<pair<int, int>> arr;

        for (auto& x : freq) {
            arr.push_back({x.first, x.second});
        }

        // Step 3: Sort by frequency, highest first
        sort(arr.begin(), arr.end(), [](auto& a, auto& b) {
            return a.second > b.second;
        });

        // Step 4: Take top k elements
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].first);
        }

        return result;
    }
};