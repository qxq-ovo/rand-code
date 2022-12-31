#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef queue<int> qi;
typedef pair<int, int> p;

#define dbg(x) cout<<#x<<" = "<<x<<endl
#define PB push_back
#define MP make_pair
#define sz(x) (int)(x).size()
#define INF (int)1e9
#define EPS 1e-9
#define REP(name,st,ed,inc) for(int name=st; name<=ed;name+=inc)
#define RREP(name,st,ed,dec) for(int name=st;name>=ed;name-=dec)
#define all(cont) cont.begin(), cont.end()

const int N = 2*100000+20;

int n,m;
int a[N],b[N],a_calc[N],b_cal[N];

inline int read() {
    char ch=getchar();
    int x=0,cf=1;
    while(ch<'0'||ch>'9') { if(ch=='-') cf=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9') { x=(x<<3)+(x<<1)+(ch^48); ch=getchar();}
    return x*cf;
}

int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++) a[N-i] = read();
    for(int i=1;i<=m;i++) b[N-i] = read();


    RREP(i,N,N-m,1){
        cout<<b[i]<<endl;
    }

   return 0;
}

