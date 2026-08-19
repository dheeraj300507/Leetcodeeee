class Solution {
public:
    int minElement(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int sum=0;
            while(temp>0){
                int digit=temp%10;
                sum+=digit;
                temp/=10;
            }
            nums[i]=sum;
        }
        int mn=INT_MAX;
        for(int x:nums ){
            mn=min(mn,x);
        }
        return mn;
    }
};