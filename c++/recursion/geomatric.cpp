#include<iostream>
#include<math.h>
using namespace std;

double sum(int n){
    if(n ==0 ){
        return 1;
    }
    double ans = sum(n-1);
    return ans+(1/pow(2,n));
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<" ";
}