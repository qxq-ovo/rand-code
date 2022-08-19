#include<bits/stdc++.h>

using namespace std;
int a[7];
int main()
{
   for(int i=0;i<7;i++) cin>>a[i];
   sort(a,a+7);
   cout<<a[6]-a[5]<<" "<<a[6]-a[4]<<" "<<a[6]-(a[6]-a[5])-(a[6]-a[4])<<endl;
}
