class Solution {
public:
    bool checkIfPangram(string sen) {
        set<char> st;
        for(char c:sen){
            st.insert(c);
        }
        if(st.size()==26)
            return true;
        return false;
    }
};