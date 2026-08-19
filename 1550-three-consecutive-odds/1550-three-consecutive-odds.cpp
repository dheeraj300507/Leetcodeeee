class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        int i=0;
        int j=i+1;
        int k=i+2;
        while(i<j<k && k<nums.size()){
            if(nums[i]%2!=0 && nums[j]%2!=0 && nums[k]%2!=0)
                return true;
            i++;
            j++;
            k++;
            
        }
        return false;
    }
};