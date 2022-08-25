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


double root (double a, double b, double c) {
    double d = b*b - 4*a*c;
    if (d < 0) return 0;
    return (-b + sqrt(d)) / (2*a);
}

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    root(a,b,c);
   return 0;
}

