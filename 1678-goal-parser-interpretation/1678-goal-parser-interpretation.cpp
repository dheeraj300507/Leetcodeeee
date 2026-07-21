class Solution {
public:
    string interpret(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i] == 'G'){
                ans+='G';
            }
            else if((i+1)< s.length() && (s[i]=='(' && s[i+1]== ')')){
                ans+='o';
            }
            else if( (i+1)< s.length() && (i+2) < s.length() && (s[i] =='(' && s[i+1] == 'a' && s[i+2]== 'l')){
                ans+='a';
                ans+='l';
            }
        }
        return ans;
    }
};