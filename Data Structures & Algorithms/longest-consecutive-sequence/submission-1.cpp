class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>number(nums.begin(), nums.end());
        int longest = 0;
        for (int num: number){
            if(number.find(num-1)==number.end()){
                int seq = 1; 
            while(number.find(num+seq)!=number.end()){
                seq++;
            }
            longest = max(longest, seq);
            }
        }
        return longest;
    }
};
