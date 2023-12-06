#include<bits/stdc++.h>

using namespace std;

int taller(const vector<int>& vec, int d){
    int left = 0, right = vec.size()-1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(vec[mid] < d ){
            left = mid + 1;
        }
        else{ 
            right = mid + 1;
        }
    }
    return -1;
}
int smaller(const vector<int>& vec, int d){
    int left = 0, right = vec.size()-1;
    int ans = 0;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(d == vec[mid]){
            //right = mid - 1;
            return vec[mid-1];
        }
        else if(vec[mid] < d && vec[mid+1] > d ){
            return mid;
        }
        else if( vec[mid] > d){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int nn;
    cin >> nn;
    for(int i = 0; i < nn;i++){
        int d;
        cin >> d;
        int a1 = smaller(vec, d), a2 = taller(vec, d);
        cout << (a1 == -1 ? "X" : to_string(a1)) << " " << (a2 == -1 ? "X" : to_string(a2)) << endl;
    }
}