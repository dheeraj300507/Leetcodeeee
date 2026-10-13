class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int c=0;
        for(int x: nums){
            if(x<k)
                c++;
        }  
        return c; 
    }
};