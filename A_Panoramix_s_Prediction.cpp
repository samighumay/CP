#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i*i <= n;i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        a++;
        if(isPrime(a) && a != b){
            cout << "NO";
            break;
        }
        else if(isPrime(a) && a == b){
            cout << "YES";
            break;
        }
        else if(!isPrime(a) && a == b){
            cout << "NO";
            break;
        }
    }
}