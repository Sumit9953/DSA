#include<iostream>
using namespace std;

int sumofN(int n,int k){
    if(n==0){
        return k;
    }
    return sumofN(n-1,k+n);
}

int main(){
cout<<sumofN(4,0);
}