class Solution {
public:
    int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    void dfs(vector<vector<char>>& grid, int r, int c){
        if(r<0 || c<0 || r>=grid.size()|| c>=grid[r].size() || grid[r][c]=='0'){
            return;
        }

        grid[r][c] = '0';
        for(int i=0; i<4; i++){
            int x = r+dir[i][0];
            int y = c+dir[i][1];

            dfs(grid,x,y);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    dfs(grid,i,j);
                }
            }
        }

        return cnt;
    }
};
