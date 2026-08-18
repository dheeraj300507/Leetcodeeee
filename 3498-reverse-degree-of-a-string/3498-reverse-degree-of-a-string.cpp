class Solution {
public:
    int reverseDegree(string s) {
        int prod=0;
        for(int i=0;i<s.length();i++){
                int val=abs(s[i]-'z')+1;
                prod+=val*(i+1);
        }
        return prod;
    }
};