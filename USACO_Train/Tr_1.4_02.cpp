/*
ID: keyston2
TASK: barn1
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

int num[200];
vi diff;
bool cmp(int a,int b){
    return a>b;
}

void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("barn1");
    ios::sync_with_stdio(0);
   cin.tie(0);
   int m,s,c;
   cin>>m>>s>>c;
   for(int i=0;i<c;i++){
       cin>>num[i];
   }
   sort(num,num+c);
   if(c<=m){
       cout<<c<<endl;
       return 0;
   }
   //计算每一个差值
   diff.PB(num[0]-1);
   for(int i=0;i<c-1;i++){
       diff.PB(num[i+1]-num[i]);
   }
   sort(diff.begin(),diff.end(),cmp);
   //减
   int ans=num[c-1]-num[0]+1;
   for(int i=0;i<m-1;i++){
       ans-=diff[i]-1;
   }
   cout<<ans<<endl;
}