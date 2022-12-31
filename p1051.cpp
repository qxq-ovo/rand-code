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

int N,t;

struct stu{
    string name;
    int num;
    int f,c,cnt,money = 0;
    bool is_lead, is_west;
}a[108];

void upd(){
    REP(i,1,N,1){
        //院士奖
        if(a[i].f>80 && a[i].cnt>=1)a[i].money+=8000;
        //五四
        if(a[i].f>85 && a[i].c>80)a[i].money+=4000;
        //成绩优秀
        if(a[i].f>90)a[i].money+=2000;
        //西部
        if(a[i].f>85 && a[i].is_west)a[i].money+=1000;
        //班贡
        if(a[i].c>80 && a[i].is_lead)a[i].money+=850;
        t+=a[i].money;
    }
}

bool cmp(stu a, stu b){
    if(a.money==b.money){
        return a.num < b.num;
    }else return a.money > b.money;
}

int main()
{
    N = read();
    char x,y;
    REP(i,1,N,1){
        cin >> a[i].name >> a[i].f >> a[i].c;
        cin>>x>>y;
        if(x=='N')a[i].is_lead=false;
        else a[i].is_lead = true;
        if(y=='N')a[i].is_west = false;
        else a[i].is_west = true;
        cin>>a[i].cnt;
        a[i].num = i;
    }
    upd();
    sort(a+1,a+N+1,cmp);
    cout<<a[1].name<<endl<<a[1].money<<endl<<t;
   return 0;
}
