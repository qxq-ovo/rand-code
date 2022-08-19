/*
ID: keyston2
TASK: gift1
LANG: C++                 
*/

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
#define PB push_back

ofstream fout("gift1.out");
ifstream fin("gift1.in");

struct nodes{
    string name;
    int money;
};

bool cmpstr(string a,string b){
    if(a.length()!=b.length()) return 0;
    bool flag=1;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]) flag=0;
    }
    return flag;
}

nodes ppl[20];
int main()
{
   int n;
   fin>>n;
   for(int i=0;i<n;i++) fin>>ppl[i].name;
   //主循环
   string a;
   int x;//x存储当前主人的位置
   for(int i=0;i<n;i++){
       //输入名字（准备分钱的名字并判断）
       fin>>a;
       //主人名字比对分析
       for(int i=0;i<n;i++){
           if(cmpstr(ppl[i].name,a)) x=i;
       }
       //计算主人余额
       int total,num;
       fin>>total>>num;
       if(num!=0) ppl[x].money-=total-(total%num);
       //当num不为0时 依次输入每个人的名字，查找，并进行对应操作
       string rec; //接受者的名字
       int y; //存储接受者的位置
       if(num!=0){
           for(int i=0;i<num;i++){
               fin>>rec;
               //查找接受者的名字
               for(int i=0;i<n;i++){
                   if(cmpstr(ppl[i].name,rec)) y=i;
               }
               //接受者加钱
               ppl[y].money+=total/num;
           }
       }
   }
   //输出
   for(int i=0;i<n;i++) fout<<ppl[i].name<<" "<<ppl[i].money<<endl;
}
