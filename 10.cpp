//Function with multiple parameters
#include <iostream>
using namespace std;
int x,y;
int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}

int main(){
    /*
    cout<<"please input a number"<<endl;
    cin>>x;
    cout<<"please input another number"<<endl;
    cin>>y;
    */
    x = 43;
    y = 86;
    cout<<addNumbers(x,y)<<endl;
}