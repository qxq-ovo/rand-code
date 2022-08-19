// a small calculator project
#include <iostream>
using namespace std;
int main(){
    //declare three variables
    int a,b,sum;
    //prompt text
    cout<<"Enter a number \n";
    //input stream object
    //">>" is the stream extraction operator
    cin>>a;
    cout<<"Enter another number \n";
    cin>>b;
    sum = a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
    return 0;
}