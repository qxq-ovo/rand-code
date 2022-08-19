/*
ID: keyston2
TASK: beads
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


void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
int n,ans=0,l,r,now;
char s[1000],la,ra; 

int main() {
    setIO("beads");
    cin>>n>>s;//输入
    for(int i=n;i<n*2;++i)s[i]=s[i-n];//初始化
    for(int i=0;i<n*2;++i){
        l=i,r=i+1,la=s[l],ra=s[r],now=0;//初始化
        if(s[l]=='w')la=s[l-1];//特殊情况
        if(s[r]=='w')ra=s[r-1];//特殊情况
        while(l>=0){//从右往左
            if(s[l]==la||s[l]=='w')++now;
            else break;
            --l;
        }
        while(r<2*n){//从左往右
            if(s[r]==ra||s[r]=='w')++now;
            else break;
            ++r;
        }
        ans=max(ans,now);//答案为最大个数
    }
    if(ans>n)ans=n;//如果超出范围取n
    cout<<ans<<endl;//输出答案
}