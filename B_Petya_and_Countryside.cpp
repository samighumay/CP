#include<bits/stdc++.h>

using namespace std;

int solve(const vector<int>& vec, int nn){
    int i = nn, right = vec.size();
    int cnt = 1;
    bool brk = false;
    while(i + 1 < right){
        if(vec[i] <= vec[i+1]){
            cnt++;
            i++;
        }
        else if(vec[i] > vec[i+1]){
            while(i+1 < right){
                if(vec[i+1] <= vec[i]){
                    cnt++;
                    i++;
                }
                else{
                    brk = true;
                    break;
                }
            }

        }
        if(brk) break;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> sz;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for(int i = 0; i < n; i++){
        sz.push_back(solve(vec, i));
    }
    sort(sz.begin(), sz.end());
    int ab = sz.size()-1;
    cout << sz[ab];
}
