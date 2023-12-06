#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    string s;
    cin >> s; 
    vector<int> cod, idx{}, dis{};
    for(int i = 0; i < a;i++){
        int inp;
        cin >> inp;
        cod.push_back(inp);
    }
    for(int i = 0; i < s.size()-1;i++){
        if(s[i] == 'R' && s[i+1] == 'L'){
            dis.push_back(abs(cod[i + 1] - cod[i]));
        }
        else if(s[i] == 'L' && s[i-1] == 'R' && i > 0){
            dis.push_back(abs(cod[i - 1] - cod[i]));
        }
    }

    if(dis.size() > 0){
        sort(dis.begin(), dis.end());
        cout << dis[0]/2;
    }
    else{
        cout << -1;
    }
}