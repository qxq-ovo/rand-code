/*
ID: keyston2
TASK: crypt1
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


int num[10];
int n;


bool check(int a,int b, int c,int d,int e){
    while(a){
        int tmp=a%10;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(num[i]==tmp) flag=true;
        }
        if(!flag)return 0;
        a/=10;
    }
    while(b){
        int tmp=b%10;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(num[i]==tmp) flag=true;
        }
        if(!flag)return 0;
        b/=10;
    }
    while(c){
        int tmp=c%10;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(num[i]==tmp) flag=true;
        }
        if(!flag)return 0;
        c/=10;
    }
    while(d){
        int tmp=d%10;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(num[i]==tmp) flag=true;
        }
        if(!flag)return 0;
        d/=10;
    }
     while(e){
        int tmp=e%10;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(num[i]==tmp) flag=true;
        }
        if(!flag)return 0;
        e/=10;
    }
    return 1;
}

int main() {
    setIO("crypt1");
    ios::sync_with_stdio(0);
   cin.tie(0);
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>num[i];
   }
   int p1,p2,ans=0;
   for(int i=100;i<=999;i++){
       for(int j=10;j<=99;j++){
           p1=j/10;
           p2=j%10;
           if(i*j<=9999){
               if(p1*i<=999&&p2*i<=999){
                   //才开始进行判断数字是否出现过
                   if(check(i,j,p1*i,p2*i,i*j)){
                       ans++;
                   } 
               }
           }
       }
   }
   cout<<ans<<endl;
}