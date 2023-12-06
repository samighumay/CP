#include<bits/stdc++.h>

using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    int aa = a, bb = b;
    bool coprime = true;
    for(int i = 0; i < 50;i++){
        int x = aa++;
        for(int j = 2; j*j <= x;j++){
            if(x%j == 0){
                coprime = false;
            }
        }
        for(int j = 2; j*j <= a;j++){

        }
    }
}
