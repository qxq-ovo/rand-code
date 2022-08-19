#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
#define PB push_back

ofstream fout("word.out");
ifstream fin("word.in");

int main()
{
    int n,k;
    fin>>n>>k;
    bool space;
    string a;
    int cnt=0;
    for(int i=0;i<n;i++){
        fin>>a;
        cnt+=a.length();
        if(cnt>k) fout<<endl<<a,cnt=a.length();
        else{
            if(cnt>a.length()) fout<<" "<<a;
            else fout<<a;
        }
    }  
}
