#include<bits/stdc++.h>
#include<climits>

using namespace std;
using ll = long long;

int main() {
    string x;
    cin >> x;
    ll a = 0, cnt = 0;
    for (int i = x.size() - 1; i >= 0; i--) {
        if( i == 0 && (x[i] - '0') == 9 )  a += pow(10, cnt) *(x[i]-'0');
        else if((x[i] - '0') > 4 ) a += pow(10, cnt) * (9 - (x[i]-'0'));
        else a += pow(10, cnt) *(x[i]-'0');
        cnt++;
     }
    cout << a;
    return 0;
}
