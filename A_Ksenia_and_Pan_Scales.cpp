#include <bits/stdc++.h>

using namespace std;

int main(){
    string x, age = "", pore = "", ch;
    cin >> x >> ch;
    int idx = 0, right  = 0, left = 0;
    vector<char> agev, porev, deyav;
    for(int i = 0; i < x.size();i++){
        if(x[i] == '|'){
            idx = i;
        }
    }
    for(int i = 0; i < ch.size(); i++){
        deyav.push_back(ch[i]);
    }
    for(int i = 0; i < x.size();i++){
        if(i < idx){
            age = age + x[i];
            left++;
            agev.push_back(x[i]);
        }
        else if(i > idx){
            pore = pore + x[i];
            right++;
            porev.push_back(x[i]);
        }
    }
    //int av = ch.size();
    while(left >= right && deyav.size() > 0){
        pore = pore + deyav.back();
        deyav.pop_back();
        right++;
    }
    while(left <= right && deyav.size() > 0){
        age = age + deyav.back();
        deyav.pop_back();
        left++;
    }
    if(deyav.size() > 0){
        while(deyav.size() > 0){
            pore = pore + deyav.back();
            deyav.pop_back();
            right++;
            if(deyav.size() > 0){
                age = age + deyav.back();
                deyav.pop_back();
                left++;
            }
        }
    }
    if(right != left){
        cout << "Impossible" << endl;
    }
    else{
        cout << age << '|' << pore << endl;
    }
}