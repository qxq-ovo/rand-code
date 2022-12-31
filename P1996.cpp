#include <bits/stdc++.h>
using namespace std;

int n, m, cnt=0;
queue<int> q;

int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        q.push(i);
    }

    while(!q.empty()){
        cnt++;
        if(cnt!=m){
            int num = q.front();
            q.pop();
            q.push(num);
        }else{
            int num = q.front();
            q.pop();
            cout<<num<<" ";
            cnt = 0; 
        }
    }
}