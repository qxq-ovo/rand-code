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
#define RREP(name,st,ed,dec) for(int name=st;name>=ed;name-=inc)
#define all(cont) cont.begin(), cont.end()

inline int read() {
    char ch=getchar();
    int x=0,cf=1;
    while(ch<'0'||ch>'9') { if(ch=='-') cf=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9') { x=(x<<3)+(x<<1)+(ch^48); ch=getchar();}
    return x*cf;
}

inline void write(int x)
{
    if(x<0)putchar('-'),x=-x;
    if(x>9)write(x/10);
    putchar(x%10+48);
}

int main()
{

   return 0;
}

