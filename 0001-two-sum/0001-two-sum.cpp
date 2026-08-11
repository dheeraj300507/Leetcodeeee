class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> mp;
            int needed=0;
            for(int i=0;i<nums.size();i++){
                needed=target-nums[i];
                if(mp.find(needed)!=mp.end()){
                    return {mp[needed],i};
                }
                mp[nums[i]]=i;
            }
            return {};
    }
};