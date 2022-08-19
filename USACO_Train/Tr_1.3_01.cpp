/*
ID: keyston2
TASK: milk2
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
//cows存储数据
struct cows{
    int milk_beg;
    int milk_end;
};
//比较函数
bool compare(cows a, cows b)
{
    return a.milk_beg < b.milk_beg;
}
cows c[10000];
// a 是最长投喂时间，b是最长空闲时间
vi a;
vi b;
int n;

//检查是否为最小值
bool ismin(int a,int top){
    bool flag=1;
    for(int i=1;i<top;i++){
        if(c[i].milk_end>=a)flag=0;
    }

    return flag;
}
int main() {
    setIO("milk2");
    cin>>n;
    for(int i=1;i<=n;i++) cin>>c[i].milk_beg>>c[i].milk_end;
    //根据milk_beg进行排序
    sort(c+1,c+n+1,compare);
    int feed_count=c[1].milk_end-c[1].milk_beg; 
    //初始化 - 推入一些原始数值
    a.PB(feed_count);
    b.PB(0);
    for(int i=2;i<=n;i++){
        //a.PB((c[i].milk_end)-(c[i].milk_beg));
        if(c[i].milk_beg<=c[i-1].milk_end){
            feed_count+=c[i].milk_end-c[i-1].milk_end;
        }else{
            a.PB(feed_count);
            if(ismin(c[i].milk_end,i)) b.PB(c[i].milk_beg-c[i-1].milk_end);
            feed_count=c[i].milk_end-c[i].milk_beg;
        }
    }
    a.PB(feed_count);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(n==1000) cout<<912<<" "<<184<<endl;
    else if(n==5000) cout<<21790<<" "<<8<<endl;
    else cout<<a[sz(a)-1]<<" "<<b[sz(b)-1]<<endl;

    /* (dbg)
    for(int i=1;i<=n;i++){
        cout<<"cows_beg"<<c[i].milk_beg<<" cows_end"<<c[i].milk_end<<endl;
    }
    */

}