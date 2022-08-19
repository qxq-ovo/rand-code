#include<bits/stdc++.h>
using namespace std;

ofstream fout("teleport.out");
ifstream fin("teleport.in");

int main()
{
   int a,b,c,d;
   fin>>a>>b>>c>>d;
   int ans=min(min(abs(a-c)+abs(d-b),abs(a-d)+abs(c-b)),abs(a-b));
   fout<<ans<<endl;
}
