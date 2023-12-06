#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> cats(n-1);
    vector<int> con(3e+5);
    cats.push_back(0);
    for(int i = 1; i <= n; i++){
        int inp;
        cin >> inp;
        cats[i] = inp;
    }
    con.push_back(0);
    for (int i = 0; i < n-1; i++)
    {
        int a, p;
        cin >> a >> p;
        // a--;
        // p--;
        con[p] = a;
        con[a] = p;
    }
#include <bits/stdc++.h>

using namespace std;

const int mx = INT_MAX;
int adlt[mx];
bool vis[mx];
int n , m;
vector<int> g;
vector<int> a;

void read()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        int v, u;
        scanf("%d%d", &v, &u);
        v--;u--;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    return;
}

int main(){
    // adlt[0] = 1;
    // adlt[0] = 2;
    // adlt[1] = 3;
    // adlt[1] = 4;
    // adlt[2] = 5;
    // adlt[2] = 7;
    // adlt[1] = 0;
    // adlt[0] = 2;
    // adlt[1] = 3;
    // adlt[1] = 4;
    // adlt[2] = 5;
    // adlt[2] = 7;
    read();
    for(auto &it : g){
        cout << it << " ";
    }

}


    
}