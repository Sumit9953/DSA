#include<iostream>
using namespace std;

int fib(int n){

    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
 int small1=fib(n-1);
 int small2=fib(n-2);
 return small1+small2;
}

int main(){
    cout<<fib(4);
}