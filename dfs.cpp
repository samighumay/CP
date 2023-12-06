#include <bits/stdc++.h>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

inline bool valid(int crow, int ccol, int rc){
    return(crow < rc && crow >= 0 && ccol < rc && ccol >= 0);
}

int len, cnt = 0;;

void dfs(const vector<vector<char>>& grid, vector<vector<bool>>& visited, int crow, int ccol, int len, int maxlen, int cnt, int rc){
    if(visited[crow][ccol] || !(len <= maxlen)) {
        cnt++;
        return;
    }
    visited[crow][ccol] = true;
    for(int i = 0; i < 4; i++){
        int nrow = crow + dx[i];
        int ncol = ccol + dy[i];
        if(grid[ncol][nrow] == 'x' || grid[ncol][nrow] == '@' && valid(nrow, ncol, rc)){
            dfs(grid, visited, nrow, ncol, len+1, maxlen, cnt, rc);
        }
    }

}


int main(){
    int t, cas = 0;
    cin >> t;
    while(t--){
        int rc;
        cin >> rc;
        len = 1;
        cnt = 0;
        int maxlen = rc/2;
        vector<vector<char>> grid;
        vector<vector<bool>> visited(rc, vector<bool>(false));
        for(int i = 0; i < rc; i++){
            for (int j = 0; j < rc; j++)
            {
                char inp;
                cin >> inp;
                grid[i][j] = inp;
            }
        } // taken input
        for(int i = 0; i < rc; i++){
            for (int j = 0; j < rc; j++)
            {
                if(grid[i][j] == 'x' || grid[i][j] == '@'){
                    dfs(grid, visited, i, j, len, maxlen, cnt, rc);
                }
            }
        }
        cout << "Case " << cas++ << ": " <<  cnt << "\n";

    }
}