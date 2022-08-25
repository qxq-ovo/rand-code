#include<bits/stdc++.h>
using namespace std;

const int N = 10e5+10;
const int M = 10e5+10;

int tot, n, m, s, x, y, a, b;
int head[N],nxt[M],to[M],depth[N],fa[N][22],kmax[N];

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

void dfs(int now, int fat){
    fa[now][0] = fat;
    depth[now] = depth[fat]+1;
    for(int i=1;i<=kmax[depth[now]];i++){
        fa[now][i] = fa[fa[now][i-1]][i-1];
    }
    for(int i=head[now];i;i=nxt[i]){
        if(to[i]!=fat){
            dfs(to[i],now);
        }
    }
}

void lca(int p, int q){
    if(depth[p] < depth[q])swap(p,q);
    while(depth[p] > depth[q]){
        p = fa[p][kmax[depth[p]-depth[q]]-1];
    }
    if(p == q){
        cout<<p<<endl;
        return;
    }
    for(int k = kmax[depth[p]]-1; k>=0; --k){
        if(fa[p][k] != fa[q][k]){
            p = fa[p][k];
            q = fa[q][k];
        }
    }
    cout<<fa[p][0]<<endl;
}

int main(){
    n = read(), m = read(), s = read();
    for(int i=1; i<n;i++){
        x = read() , y = read();
        add(y,x);
        add(x,y);
    }

    for(int i=1;i<=n;i++){
        kmax[i] = kmax[i-1] + ((1 << kmax[i-1]) == i);
    }
    dfs(s,0);
    for(int i=1;i<=m;i++){
        a = read(), b = read();
        lca(a,b);
    }
    return  0;
}