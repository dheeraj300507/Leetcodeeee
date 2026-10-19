class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& nums) {
        vector<int> temp;

        for(int i=0;i<nums.size();i++){
            int d=min(nums[i][0],nums[i][1]);
            temp.push_back(d);
        }
        int mx=*max_element(temp.begin(),temp.end());
        return count(temp.begin(),temp.end(),mx);
    }
};