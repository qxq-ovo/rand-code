/*
ID: keyston2
TASK: namenum
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


string num;

char transform(char a){
    if(a=='A'||a=='B'||a=='C') return '2';
    if(a=='D'||a=='E'||a=='F') return '3';
    if(a=='G'||a=='H'||a=='I') return '4';
    if(a=='J'||a=='K'||a=='L') return '5';
    if(a=='M'||a=='N'||a=='O') return '6';
    if(a=='P'||a=='R'||a=='S') return '7';
    if(a=='T'||a=='U'||a=='V') return '8';
    if(a=='W'||a=='X'||a=='Y') return '9';
}

int main() {
    ifstream names;
    ifstream file;
    ofstream file1;
    file1.open("namenum.out");
    file.open("namenum.in");
    string ans;
    file>>ans;
    names.open("dict.txt");
    string cmp;
    string a;
    int count=0;
    while(names>>a){
        //每一次转换完成并添加
        for(int i=0;i<a.length();i++){
            char c=transform(a[i]);
            cmp+=c;
        }
        //如果找到正确的
        if(!cmp.compare(ans)){
            //输出
            file1<<a<<endl;
            count++;
        }
        //如果不正确, 字符串清零
        cmp="";
    }
    if(count==0) file1<<"NONE"<<endl;
}