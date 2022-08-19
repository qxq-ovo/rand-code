/*
ID: keyston2
TASK: ride
LANG: C++                 
*/

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
#define PB push_back

ofstream fout("ride.out");
ifstream fin("ride.in");

int main()
{
   string a;
   string b;
   fin>>a;
   fin>>b;
   ll suma,sumb;
   suma=1;
   sumb=1;
   for(int i=0;i<a.length();i++){
       suma*=(a[i]-'A'+1);
   }
   for(int i=0;i<b.length();i++){
       sumb*=(b[i]-'A'+1);
   }
   if(suma%47==sumb%47){
       fout<<"GO"<<endl;
   }else{
       fout<<"STAY"<<endl;
   }
}
