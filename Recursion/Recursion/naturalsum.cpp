#include<iostream>
using namespace std;

int Naturalsum(int n){
    if(n == 0){
        return 0;
    }
    return n+Naturalsum(n-1);
}

int main(){
    cout<<Naturalsum(2)<<" ";
}