#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef set<int> si;
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

int result[200];
int main() {
    int n,m;
    setIO("speeding");
    cin>>n>>m;
    int prev=1;
    int total=0;
    for(int i=0;i<n;i++){
        int mile,speed;
        cin>>mile>>speed;
        total+=mile;
        for(int i=prev;i<=total;i++){
            result[i]-=speed;
        }
        prev=total+1;
    }
    int prev2=1;
    total=0;
    for(int i=0;i<m;i++){
        int mile,speed;
        cin>>mile>>speed;
        total+=mile;
        for(int i=prev2;i<=total;i++){
            result[i]+=speed;
        }
        prev2=total+1;
    }
    sort(result,result+101);
    int ans=result[100];
    if(ans<0) ans=0;
    cout<<ans<<endl;
}