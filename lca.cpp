#include<bits/stdc++.h>
using namespace std;

const int N = 10e5+10;
const int M = 10e5+10;

int tot, n, m, s, x, y, a, b;
int head[N],nxt[M],to[M],depth[N],fa[N],vis[N];

#define re register
inline int read()
{
	re int x=0,f=1;re char c=getchar();
	while(c<'0'||c>'9') {if(c=='-') f=-1;c=getchar();}
	while (c>='0'&&c<='9') x=(x<<3)+(x<<1)+(c^48),c=getchar();
	return x*f;
}

void add(int u, int v){
    tot++;
    to[tot] = v;
    nxt[tot]=head[u];
    head[u]=tot;
}

//首先两点到同一深度，然后一层一层往上跳
void solve(int p, int q){
    while(depth[p]!=depth[q]){
        if(depth[p] > depth[q]){
            p = fa[p];
        }else{
            q = fa[q];
        }
    }
    if(q!=p){
        while(q!=p){ 
            if(p == s || q == s){
                cout<<"break"<<endl;
                break;
            }
            q = fa[q];
            p = fa[p];   
        }
        cout<<q<<endl;
    }else{
        cout<<q<<endl;
    }
}

struct node{
    int id, depth;
};
//BFS将图分层
void bfs(){
    queue<node>q;
    node st;
    st.id = s, st.depth = 0;
    q.push(st);
    depth[s] = 0;
    while(!q.empty()){
        node cur = q.front();
        depth[cur.id] = cur.depth;
        q.pop();
        vis[cur.id] = 1;
        for(int i = head[cur.id];i;i=nxt[i]){
            if(vis[to[i]])continue;
            node nxt;
            nxt.id = to[i], nxt.depth = cur.depth+1;
            fa[nxt.id] = cur.id;
            q.push(nxt);
            vis[to[i]] = 1;
        }
    }
}

int main(){
    n = read(), m = read(), s = read();
    for(int i=1; i<n;i++){
        x = read() , y = read();
        add(y,x);
        add(x,y);
        fa[x] = y;
    }
    bfs();
    fa[s] = s;
    for(int i=1;i<=m;i++){
        a = read(), b = read();
        solve(a,b);
    }
    return  0;
}