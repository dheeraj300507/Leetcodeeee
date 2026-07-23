class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //-4,-1,-1,0,1,2
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(sum<0){
                    l++;
                    while(l<r && nums[l]==nums[l-1])l++;
                }
                else if(sum>0){
                    r--;
                    while(l<r && nums[r]==nums[r+1])r--;
                }
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1] && nums[r]==nums[r+1]){
                        l++;
                        r--;
                    }
                }
            }
        
        }
        return ans;
    }
};