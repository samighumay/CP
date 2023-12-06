#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<int> vec;
    for(int i = 0; i < 2 * a + 1;i++){
        int inp;
        cin >> inp;
        vec.push_back(inp);
    }
    int cnt = 1, c = 0;
    for (int i = 0; i < vec.size(); i++)
    {

        if( vec[i] - 1 > vec[i+1]  && vec[i] - 1 > vec[i-1] && cnt % 2 == 0 && b >= 0 && i > 0 && i + 1 < vec.size() && c < b) {
            cout << vec[i] - 1 << " ";
            c++;
        }
        else cout << vec[i] << " ";
        cnt++;
    }
    
}