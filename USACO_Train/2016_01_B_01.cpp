#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
#define PB push_back

ofstream fout("promote.out");
ifstream fin("promote.in");

ll num[4][2];
ll result[4];

int main()
{
   for(int i=0;i<4;i++){
       for(int j=0;j<2;j++){
           fin>>num[i][j];
       }
   }
   //special treatment with platinum
   result[3]=num[3][1]-num[3][0];
   if(result[3]<0) result[3]=0;
   //loop the rest, don't care about bronze
   for(int i=2;i>0;i--){
       result[i]=num[i][1]-num[i][0]+result[i+1];
       if(result[i]<0) result[i]=0;
   }
   //output
   for(int i=1;i<=3;i++){
       fout<<result[i]<<endl;
   }
}
