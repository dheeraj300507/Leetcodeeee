class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx=INT_MIN;
        for(int i=1;i<nums.size();i++){
                int x=abs(nums[i-1]-nums[i]);
                mx=max(x,mx);
        } 
          mx=max(mx,abs(nums[0]-nums[nums.size()-1]));
          return mx;
    }
};