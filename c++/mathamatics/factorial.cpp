#include<iostream>
using namespace std;

int fact(int n){
    if( n == 0)
    return 1;
    return fact(n-1)*n;
}
int fact1(int n){
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res*i;
    }
    return res;
}
 int main(){
    int n;
    cin>>n;
    cout<<fact1(n);

 }