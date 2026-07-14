class Solution {
public:
    bool canJump(vector<int>& nums) {
        int till=0;
        int n=nums.size()-1;
        if(nums.size()==1){
            return true;
        }
        for(int i=0;i<n;i++){
            till=max(till,nums[i]+i);
           // cout<<till<<endl;
            if(i>=till)return false;
            if(till>=n){
                return true;
            }
            //till=0;
        }
        return false;
    }
};