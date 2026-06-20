class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>result;
        for (const auto &s:strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            result[sorted].push_back(s);
        }
        vector<vector<string>>final;
        for(auto& pair:result){
            final.push_back(pair.second);
        }
        return final;
    }
};
