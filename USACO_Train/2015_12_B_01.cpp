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


void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int fence[200];

int main() {
    setIO("paint");
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    for(int i=a;i<b;i++) fence[i]=1;
    for(int i=c;i<d;i++) fence[i]=1;
    int ans = 0;
    for(int i=min(a,c);i<=max(b,d);i++) if(fence[i]==1) ans++;
    cout<<ans<<endl;
}