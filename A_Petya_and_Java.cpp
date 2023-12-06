#include<bits/stdc++.h>

using namespace std;

int main(){
    string x;
    cin >> x;
    int n = x.size();
    if(n >= -128 || n <= 127) cout << "byte";
    if(n >= - 32768 || n <= 32767) cout << "short";
    if(n == 10) cout << "int";
    if(n == 19) cout << "long";
    if(n > 19) cout << "BigInteger";
}