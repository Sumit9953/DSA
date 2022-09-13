#include<iostream>
using namespace std;

int power(int x,int n){
if(n == 0){
    return 1;
}
int smalloutput = power(x,n-1);
int output = x*smalloutput;
return output;
}


  int main(){
    int n,x;
    cin>>x>>n;
    cout<<power(x,n);
  }