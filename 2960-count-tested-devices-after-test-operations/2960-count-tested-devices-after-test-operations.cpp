class Solution {
public:
    int countTestedDevices(vector<int>& batt) {
        int c=0;
     for(int i=0;i<batt.size();i++){
        if(batt[i]>0){
            c++;
            for(int j=i+1;j<batt.size();j++){
                batt[j]=max(0,batt[j]-1);
            }
        }
     }
        return c;
    }
};