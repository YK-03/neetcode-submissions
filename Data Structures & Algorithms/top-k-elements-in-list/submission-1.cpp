class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums){
            count[num]++;
        }
        vector<pair<int, int>>ans;
        for (const auto& p : count){
            ans.push_back({p.second, p.first});
        }
        sort(ans.rbegin(), ans.rend());
        vector<int>res;
        for (int i = 0; i<k; i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};
