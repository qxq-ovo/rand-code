#include<bits/stdc++.h>

using namespace std;

int n, ans = 1e9, a[105], pre=-1;

int solve(int x){
    return max(pre,a[x+1]-a[x-1]);
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=2;i<=n;i++) pre = max(pre,a[i]-a[i-1]);
    for(int i=2;i<n;i++) ans = min(ans,solve(i));
    cout<<ans<<endl;
    return 0;
}