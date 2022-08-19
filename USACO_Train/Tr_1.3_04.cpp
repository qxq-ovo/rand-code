/*
ID: keyston2
TASK: palsquare
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

int main() {
    setIO("palsquare");
    ios::sync_with_stdio(0);
   cin.tie(0);
   int num;
   cin>>num;
   string a;
   for(int i=1;i<=300;i++){
       a=to_base(i*i,num);
       if(ispal(a)){
           cout<<to_base(i,num)<<" "<<to_base(i*i,num)<<endl;
       }
   }
}