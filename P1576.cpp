#include<cstdio>
#include<queue>
#define mp 2048
#define ml 262144
#define ci const int
#define ldb long double
using namespace std;
int head[mp],ver[ml],nxt[ml],edge[ml],n,m,tot;
ldb d[mp];
struct pr{
    ldb d;int p;
    pr(ldb a=0,ci b=0){d=a;p=b;}//构造函数，用于初始化结构体的值，不会可自行百度 
    inline bool operator < (const pr a)const{return d<a.d;} 
};
priority_queue<pr>q;
inline void adds(ci a,ci b,ci c){
    ver[++tot]=b;
    nxt[tot]=head[a];
    head[a]=tot;
    edge[tot]=c;
}
inline int rd(){
    int io=0;char in=getchar();
    while(in<'0'||in>'9')in=getchar();
    while(in>='0'&&in<='9')io=io*10+in-'0',in=getchar();
    return io;
}
int main(){
    n=rd(),m=rd();
    for(int t=1;t<=n;++t)d[t]=2000000000;//long double不能memset 
    for(int t=1;t<=m;++t){
        int x=rd(),y=rd(),z=rd();
        adds(x,y,z);
        adds(y,x,z);//百分比作为边权 
    }
    int a=rd(),b=rd();
    d[b]=100,q.push(pr(100,b));
    while(!q.empty()){//dijkstra
        int x=q.top().p;
        q.pop();
        for(int t=head[x];t;t=nxt[t]){
            int y=ver[t];
            ldb dist=d[x]/(1-(ldb)edge[t]/100);//计算：把边权存储的百分比复原为这个点真实需要转的钱  
            if(dist<d[y]){
                d[y]=dist;
                q.push(pr(-dist,y));
            }
        } 
    }
    printf("%.8Lf",d[a]);
    return 0;
}