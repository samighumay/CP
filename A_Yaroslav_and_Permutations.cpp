#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int j = 0; j < n;j++){
        int i;
        cin >> i;
        s.insert(i);
    }
    int distVal = s.size(), cmn = n - distVal;
    if(distVal == n){
        cout << "YES";
    }
    else if(cmn >= distVal/2 && distVal != 1 && distVal >= n/2){
        cout << "YES";
    }
    else if( distVal-1 >= cmn && distVal != 1 && distVal < n/2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}