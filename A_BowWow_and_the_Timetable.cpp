#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    long long a = 0, cnt = 0, fn = 0;
    long long ans = 0, po = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '1'){
            a += pow(2, cnt);
        }
        while( ans < a){
            ans = pow(4, po);
            if(ans < a) po++;
        }
        if (ans > 0) {
            a /= ans;
        }
        cnt++;
       // cout << a << endl;
    }
    cout << po ;
}
