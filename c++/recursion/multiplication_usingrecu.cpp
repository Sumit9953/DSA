#include<iostream>
using namespace std;

int multiplication(int m,int n){
    if(n == 0){
        return 0;
    }
    return multiplication(m,(n-1))+m;
}


int main(){
    int m,n;
    cin>>m>>n;
    cout<<multiplication(m,n);
}