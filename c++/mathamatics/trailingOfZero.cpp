#include<iostream>
using namespace std;

int traling(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact*i;
    }

    int res = 0;
    while (fact%10 == 0)
    {
        res++;
        fact = fact/10;
    }
    
    return res;
}

int traling1(int n){
    int res =0;
    for (int i = 5; i <= n; i = i*5)
    {
        res = res+n/i;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<traling1(n);
}