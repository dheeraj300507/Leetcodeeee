class Solution {
public:
    int find(vector<int>& leader,int node){
        if(leader[node]==node){
            return node;
        }
        return leader[node]=find(leader,leader[node]);
    }
    void join(vector<int>& leader,int left,int right){
        left=find(leader,left);
        right=find(leader,right);
        if(left!=right){
            leader[left]=right;
        }
    }


    int findCircleNum(vector<vector<int>>& grid) {
        int N=grid[0].size();
        vector<int> leader(N+1);

        for(int i=0;i<=N;i++){
            leader[i]=i;
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==1){
                    join(leader,i+1,j+1);
                }
            }
        }

        vector<int> gcnt(N+1,0);

        for(int i=0;i<=N;i++){
            int super=find(leader,i);
            gcnt[super]++;
        }

        int groups=0;

        for(int i=1;i<=N;i++){
            if(gcnt[i]>0){
                groups++;
            }
        }

        return groups;
    }
};