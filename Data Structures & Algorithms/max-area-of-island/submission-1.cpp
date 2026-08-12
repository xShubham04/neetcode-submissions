class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        int dr[]={0,0,1,-1};
        int dc[]={-1,1,0,0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int count=1;
                    grid[i][j]=0;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        auto [row,col]=q.front();
                        q.pop();
                        for(int k=0;k<4;k++){
                            int nr=row+dr[k];
                            int nc=col+dc[k];
                            if(nr<m && nc<n && nr>=0 && nc>=0 && grid[nr][nc]==1){
                                count++;
                                grid[nr][nc]=0;
                                q.push({nr,nc});
                            }
                        }
                    }
                    ans=max(ans,count);
                }
            }
        }
        return ans;
    }
};
