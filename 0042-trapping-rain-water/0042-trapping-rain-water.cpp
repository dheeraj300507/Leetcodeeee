class Solution {
public:
    int trap(vector<int>& h) {
        int l=0,r=h.size()-1;
        int leftmax=0,rightmax=0,water=0;

        while(l<r){
            if(h[l]<=h[r]){
                leftmax=max(leftmax,h[l]);
                water+=leftmax-h[l];
                l++;
            }
            else{
                rightmax=max(rightmax,h[r]);
                water+=rightmax-h[r];
                r--;
            }
        }
        return water;
    }
};