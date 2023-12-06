#include<bits/stdc++.h>

using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
        double x = (x1 + x4 - x3), y = (y1 + y4 - y3);
        cout << setprecision(3) << x << " " << y << endl;
    }
}