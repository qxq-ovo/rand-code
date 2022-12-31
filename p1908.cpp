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

int a[500005], b[500005]; 
ll ans;

void merge_sort(int l, int r){
    if(l>=r) return;
    int mid = (l+r)/2;
    merge_sort(l, mid);
    merge_sort(mid+1, r);
    int i=l, j=mid+1, k=l;
    while(i<=mid && j<=r){
        if(a[i]<=a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
            ans += mid-i+1;
        }
    }
    while(i<=mid) b[k++] = a[i++];
    while(j<=r) b[k++] = a[j++];
    for(int i=l;i<=r;i++) a[i] = b[i];
}


int main()
{
    int n = read();
    for(int i=1;i<=n;i++) a[i] = read();
    merge_sort(1, n);
    cout<<ans<<endl;
    return 0;
}

