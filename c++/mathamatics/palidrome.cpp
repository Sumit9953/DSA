#include<iostream>
using namespace std;

bool palidrome(int n){

    int res = 0;
    int temp = n;
    while(temp != 0){
        int ld = temp%10;
        res = res*10+ld;
        temp = temp/10;
    }
  return (n == res);
}

int main(){
    int n;
    cin>>n;
    cout<<palidrome(n);
}