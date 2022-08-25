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


string word;
int a[26];
int main()
{
    cin >> word;
    for(int i=0;i<word.length();i++){
        a[word[i]-'a']++;
    }
    
    int max_cnt = 0;
    vector<char>ans;

    for(int i=0;i<26;i++){
        if(a[i]>max_cnt){
            max_cnt = a[i];
        }
    }

    for(int i=0;i<26;i++){
        if(a[i]==max_cnt){
            ans.PB(i+'a');
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] + " ";
    }
   return 0;
}

