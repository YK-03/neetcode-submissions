class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int i = 0, streak=0, curr=nums[0], res=0;
        while (i<nums.size()){
            if(curr!=nums[i]){
                curr=nums[i];
                streak=0;
            }
            while(i<nums.size()&&curr==nums[i]){
                i++;
            }
            streak++;
            curr++;
            res=max(streak,res);
        }
        return res;
    }
};
