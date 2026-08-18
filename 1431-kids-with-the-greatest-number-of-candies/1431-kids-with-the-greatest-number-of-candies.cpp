class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int extra) {
        vector<bool> ans(nums.size(),false);
        int mx=0;
        int mxidx;
        for(int i:nums){
            mx=max(mx,i);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]+=extra;
                if(nums[i]>=mx){
                    ans[i]=true;
                    //cout<<nums[i]<<endl;
                }
        }
        //ans[mxidx]=true;
        return ans;
    }
};