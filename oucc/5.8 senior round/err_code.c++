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

int n;
int a[1005],b[1005];
int m; 
int cnt;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        memset(b,0,sizeof(b));
        for(int j=0;i<n;i++){
        cin>>b[j];
    }
    //check if b[0] is in a
    bool flag=false;
    for(int i=0;i<n;i++){
        if(b[0]==a[i]){
            flag=true;
            break;
        }
    }
    if(flag){
       cnt++;
    }
    }
    cout<<cnt<<endl;
   return 0;
}

