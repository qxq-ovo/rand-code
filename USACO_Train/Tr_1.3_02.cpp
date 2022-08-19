/*
ID: keyston2
TASK: transform
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef set<int> si;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define PB push_back
#define MP make_pair
#define sz(x) (int)(x).size()


void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}


char input[20][20];
char result[20][20];
char safe[20][20];
int n;


//check函数
bool check(char input[20][20],char result[20][20]){
    bool flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(input[i][j]!=result[i][j]) flag=0;
        }
    }
    return flag;
}

//rotate 90函数
char tmp[20][20];
void rotate(char input[20][20]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmp[j][n-i-1]=input[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            input[i][j]=tmp[i][j];
            //cout<<input[i][j];
        }
        //cout<<endl;
    }
}

void reflect(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmp[i][n-j-1]=safe[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            safe[i][j]=tmp[i][j];
            //cout<<input[i][j];
        }
        //cout<<endl;
    }
}

int main() {
    setIO("transform");
    //输入部分
   cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>input[i][j];
           safe[i][j]=input[i][j];
       }
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>result[i][j];
       }
   }
   bool flag=0;
   for(int i=1;i<=7;i++){
       switch(i){
           //90
           case 1:
           rotate(input);
           if(check(input,result)) cout<<1<<endl,flag=1;
           break;
           //180
           case 2:
           rotate(input);
           if(check(input,result)) cout<<2<<endl,flag=1;
           break;
           //270;
           case 3:
           rotate(input);
           if(check(input,result)) cout<<3<<endl,flag=1;
           break;
           //反射（水平翻转）
           case 4:
           reflect();
           if(check(safe,result)) cout<<4<<endl,flag=1;
           break;
           //组合
           case 5:{
           int cnt=0;
           while(!check(safe,result)&&cnt<3){
               rotate(safe);
               cnt++;
           }
           if(check(safe,result)) cout<<5<<endl, flag=1;
           break;
           }
           //不改变
           case 6:
           rotate(input);
           if(check(input,result)) cout<<6<<endl,flag=1;
           break;
           //无效转换
           case 7:
           cout<<7<<endl,flag=1;
           break;
       }
       if(flag) return 0;
   }
}