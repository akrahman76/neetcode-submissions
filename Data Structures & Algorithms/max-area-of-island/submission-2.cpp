class Solution {
public:
    int maxArea = 0;
    int dir[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    int dfs(vector<vector<int>>&grid, int r, int c){
        if(r<0 || c<0 || r>=grid.size() || c>=grid[r].size() || grid[r][c]==0){
            return 0;
        }

        int area=1;
        maxArea = max(area,maxArea);
        grid[r][c]=0;

        for(int i=0; i<4; i++){
            int x = dir[i][0] + r;
            int y = dir[i][1] + c;
            area+=dfs(grid,x,y);
        }

        return area;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==1){
                    int area= dfs(grid,i,j);
                    maxArea = max(area,maxArea);
                }
            }
        }

        return maxArea;
    }
};
