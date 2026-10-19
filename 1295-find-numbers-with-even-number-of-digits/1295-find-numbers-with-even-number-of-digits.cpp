class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            int n=x;
            int c=0;
            while(n>0){
                n=n/10;
                c++;
            }
            if(c%2==0)
                ans++;
            c=0;
        }
        return ans;
    }
};