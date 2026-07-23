class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> subsum;
        int total=0;
        int count=0;
        subsum[0]=1;
        for(int n:nums){
            total+=n;
            if(subsum.find(total-k)!=subsum.end()){
                count+=subsum[total-k];
            }
            
                subsum[total]++;
            
        }
        return count;
    }
};