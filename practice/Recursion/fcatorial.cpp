#include<iostream>
using namespace std;

int fact(int n){
    if( n <= 1){
        return 1;
    }
    return n*fact(n-1);
}

int Fact(int n){
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res*i;
    }
    return res;
}

int main(){
    cout<<Fact(5)<<endl;
    return 0;
}