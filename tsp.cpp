#include<bits/stdc++.h>
#include<iostream>

using namespace std;
 
#define N 5
#define INF (int) 10e7
#define min(a,b) ((a>b)?b:a)
 
static const int M = 1 << (N-1);
//存储城市之间的距离
int g[N][N] = {{0,3,INF,8,9},
               {3,0,3,10,5},
               {INF,3,0,4,3},
               {8,10,4,0,20},
               {9,5,3,20,0}};
//保存顶点i到状态s最后回到起始点的最小距离
int dp[N][M] ;
 
//核心函数，求出动态规划dp数组
void TSP(){
    //初始化dp[i][0]
    for(int i = 0 ; i < N ;i++){
        dp[i][0] = g[i][0];
    }
    //求解dp[i][j],先跟新列在更新行
    for(int j = 1 ; j < M ;j++){
        for(int i = 0 ; i < N ;i++ ){
            dp[i][j] = INF;
            //如果集和j(或状态j)中包含结点i,则不符合条件退出
            if( ((j >> (i-1)) & 1) == 1){
                continue;
            }
            for(int k = 1 ; k < N ; k++){
                if( ((j >> (k-1)) & 1) == 0){
                    continue;
                }
                if( dp[i][j] > g[i][k] + dp[k][j^(1<<(k-1))]){
                    dp[i][j] = g[i][k] + dp[k][j^(1<<(k-1))];
                }
            }
        }
    }
 
}
 
int main()
{
    TSP();
    cout<<"最小值为："<<dp[0][M-1]<<endl;
    return 0;
}