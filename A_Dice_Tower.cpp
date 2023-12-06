#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, cnt = 0;
    cin >> a;
    cin >> b;
    int up = abs(b - 7);
    //vector cant contain up or b
    for(int i = 0; i < a;i++){
        int x, y;
        cin >> x >> y;
        vector<int> vec = {};
        vec.push_back(x);
        vec.push_back(y);
        vec.push_back(7-x);
        vec.push_back(7-y);
        for(int j = 0; j < 4;j++){
            if(vec[j] == up || vec[j] == b) break;
            if( j == 3) cnt++;
        }
    }
    if(cnt == a) cout << "YES" << endl;
    else cout << "NO" << endl;
}