class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwich) {
        vector<int> count{0,0};

        for(int st:students){
            count[st]++;
        } 
        for(int sn:sandwich){
            if(count[sn]==0)
                break;
            count[sn]--;
        } 
        return count[0]+count[1]; 
    }
};