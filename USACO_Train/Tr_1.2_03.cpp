/*
ID: keyston2
TASK: friday
LANG: C++                 
*/

#include<bits/stdc++.h>

using namespace std;

ofstream fout("friday.out");
ifstream fin("friday.in");

int week_day(int year,int month, int day){
    if(month==1 || month==2) month+=12, year--;
    return(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
}

int main()
{
   int n;
   fin>>n;
   int ans[8]={0};
   for(int i=1900;i<1900+n;i++){
       for(int j=1;j<=12;j++){
           ans[week_day(i,j,13)]++;
       }
   }
   fout<<ans[6]<<" "<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4]<<" "<<ans[5]<<endl;
}
