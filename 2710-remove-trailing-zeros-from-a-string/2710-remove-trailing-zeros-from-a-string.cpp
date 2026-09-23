class Solution {
public:
    string removeTrailingZeros(string s) {
        int i=0;
        int j=s.length()-1;
        while(j>=0 && s[j]=='0'){
            j--;
        }
        return s.substr(0,j+1);
        
    }
};