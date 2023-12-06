#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, cnt = 0;
    cin >> n >> a;
    a--;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    if(vec[a] == 1) cnt++;
    for(int i = 1; i < n; i++){
       if(vec[a+i] == 1 && vec[a-i] == 1 && a + i < n && a - i >= 0) cnt += 2;
       else if (vec[a+i] == 1 && a + i < n && a - i < 0) cnt++;
       else if(vec[a-i] == 1 && a + i >= n && a - i >= 0) cnt++;
    }
    cout << cnt;

}