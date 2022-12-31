#include<bits/stdc++.h>
#include<math.h>
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
#define _USE_MATH_DEFINES

int n;
double a;
double ans[50];

double calc(double x){
    double ans,slope;
    ans = sin(M_PI*10/x);
    slope = ans/(x-1.0);
    cout<<"X: "<<x<<" ans: "<<ans<<" slope: "<<slope<<endl;
    return slope;
}

int main()
{
    cin>>n;
    double arr[12] = {2.0,1.5,1.4,1.3,1.2,1.1,0.5,0.6,0.7,0.8,0.9,1.001};
    n=12;
    for(int i=0;i<n;i++){
        calc(arr[i]);
    }
    //cout<<calc(a);
   return 0;
}

