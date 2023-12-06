#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    d /= 2;
    double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    double ivolume = pi * d * d * h;
    double incrementalvolume = pi * d * d * e;
    double diff = abs(incrementalvolume - v);
    // for(int i = 0; i < 10000;i++){
    //     ivolume -= diff;

    // }
    if(v > incrementalvolume){
        cout << "YES" << endl;
        cout << setprecision(13) << ivolume/diff << endl;
    }
    else{
        cout << "NO" << endl;
    }


}