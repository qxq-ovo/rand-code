/*
ID: keyston2
TASK: milk
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef set<int> si;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define PB push_back
#define MP make_pair
#define sz(x) (int)(x).size()


struct nodes{
    int price;
    int total;
};

nodes a[10000];

bool cmp(nodes a,nodes b){
    return a.price<b.price;
}

void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("milk");
    ios::sync_with_stdio(0);
    cin.tie(0);
    int total, n;
    cin>>total>>n;
    for(int i=0;i<n;i++) cin>>a[i].price>>a[i].total;
    sort(a,a+n,cmp);
    ll price=0;
    int cnt=0;
    for(int i=0;cnt<total;i++){
        if(cnt+a[i].total>total){
            price+=(total-cnt)*a[i].price;
            break;
        }else{
            price+=a[i].total*a[i].price;
            cnt+=a[i].total;
        }
    }
    cout<<price<<endl;
}