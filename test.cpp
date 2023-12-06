#include<bits/stdc++.h>

using namespace std;

int main(){
    string binaryNumber = "11110010110000101001001101010111110101101111001000100100101111011";
    int n = binaryNumber.size();
    long long decimalNumber = 0;

    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        if (binaryNumber[i] == '1') {
            decimalNumber += pow(2, j);
        }
    }

    cout << decimalNumber << endl;

    return 0;
}
