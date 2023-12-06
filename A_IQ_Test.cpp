#include<bits/stdc++.h>
using namespace std;

int main(){
    char s;
    vector<vector<char>> grid(4, vector<char>(4));

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           if(grid[i][j] == grid[i][j+1] && grid[i][j+1] == grid[i+1][j+1] && grid[i+1][j+1] == grid[i+1][j]){
               cout << "YES";
               return 0;
           } else if(grid[i][j+1] == grid[i+1][j] && grid[i+1][j] == grid[i+1][j+1] && grid[i][j] != grid[i][j+1]){
               cout << "YES";
               return 0;
           } else if(grid[i][j] == grid[i+1][j+1] && grid[i+1][j+1] == grid[i+1][j] && grid[i][j] != grid[i][j+1]){
               cout << "YES";
               return 0;
           } else if(grid[i][j] == grid[i][j+1] && grid[i][j+1] == grid[i+1][j+1] && grid[i][j+1] != grid[i+1][j]){
               cout << "YES";
               return 0;
           } else if(grid[i][j] == grid[i+1][j] && grid[i+1][j] == grid[i][j+1] && grid[i+1][j+1] != grid[i][j]){
               cout << "YES";
               return 0;
           }
        }
    }

    cout << "NO";
    return 0;
}
