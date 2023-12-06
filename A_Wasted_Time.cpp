#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a, b;
    double len = 0;
    cin >> a >> b;
    for(int i = 0; i < n-1;i++){
        int aa, bb;
        cin >> aa >> bb;
        len += sqrt(pow((a-aa),2)+pow((b-bb),2));
        a = aa, b= bb;
    }
    cout << setprecision(9) << fixed << (double)len*k/50;
}