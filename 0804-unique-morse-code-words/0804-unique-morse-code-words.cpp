class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> ans;
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(auto s : words){
            string tmp="";
            for(char c:s){
                tmp+=morse[c-'a'];
            }
            ans.insert(tmp);
        }
        return ans.size();
    }
};