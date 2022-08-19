/*
ID: keyston2
TASK: dualpal
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

string to_base(int number,int base){
	string bases = "0123456789ABCDEFGHIJKLMNO";
	string result = "";
	while(number > 0){
		result = bases[number % base] + result;
		number /= base;
	}
	return result;
}

bool ispal(string a){
    if(a.length()==1) return true;
    int pa=0;
    int pb=a.length()-1;
    int count=0;
    if(a.length()%2!=0)count=a.length()/2+1;
    else count=a.length()/2;
    bool flag=1;
    for(int i=0;i<count;i++){
        if(a[pa]!=a[pb]) flag=0;
        pa++;
        pb--;
    }
    return flag;
}

void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO("dualpal");
    int n,s;
    string a;
    cin>>n>>s;
    int cnt=0;
    int ans=0;
    for(int i=s+1;ans<n;i++){
        cnt=0;
        for(int j=2;j<=10;j++){
            a=to_base(i,j);
            if(ispal(a)) cnt++;
        }
        if(cnt>=2){
            ans++;
            cout<<i<<endl;
        }
    }

}