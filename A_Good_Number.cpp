#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, cnt = 0;
    bool flag[10];
    cin >> a >> b;
    for(int i = 0; i < a;i++){
        memset(flag, 0, sizeof(flag));
        int x;
        cin >> x;
        while(x){
            flag[x%10] = 1;
            x /= 10;
        }
        for(int j = 0; j <= b;j++){
            if(!flag[j]) break;
            if(j == b) cnt++;
        }
    }
    cout << cnt;
}