/*
If we add the rock back to the picture, this actually rarely affects the answer, 
since we can always route around the rock unless the rock is in the same vertical or horizontal line 
as the barn and lake and lies between the two, in which case our path takes two additional steps to route 
around the rock.
*/
#include<bits/stdc++.h>

using namespace std;

ofstream fout("buckets.out");
ifstream fin("buckets.in");

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   char map[11][11];
   int cowx,cowy;
   int rx,ry;
   int lx,ly;
   for(int i=1;i<=10;i++){
       for(int j=1;j<=10;j++){
           fin>>map[i][j];
           if(map[i][j]=='B') cowx=i,cowy=j;
           if(map[i][j]=='L') lx=i,ly=j;
           if(map[i][j]=='R') rx=i,ry=j;
       }
   }
   int ans=abs(cowx-lx)+abs(cowy-ly);
   bool check=0;
   if((cowx==lx&&lx==rx)||(cowy==ly&&ly==ry)) check=1;
   if(check){
       if(rx<max(cowx,lx)&&rx>min(cowx,lx))ans+=2;
       if(ry<max(cowy,ly)&&ry>min(cowy,ly))ans+=2;
   }
   fout<<ans-1<<endl;
}
