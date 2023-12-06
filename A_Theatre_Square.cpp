        #include<bits/stdc++.h>
         
        using namespace std;
         
        int main(){
            long double n, m, a;
            cin >> n >> m >> a;
            long double theatre = ceil((n * m) / (a * a));
     
            //cout << theatre;
            if((long long)theatre % 2 == 0){
                cout << (long long)theatre;
            }
            else if( (long long)theatre == 1){
                cout << theatre;
            }
            else{
                cout <<(((long long)theatre) + 1);
            }
        }