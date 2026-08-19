class Solution {
public:
    int countKeyChanges(string str) {
        string s="";
        for(char C:str){
            s+=tolower(C);
        }
        int c=0;
        for(int i=1;i<s.length();i++){
            if(s[i-1]!=s[i])
                c++;
        }
        return c;
    }
};