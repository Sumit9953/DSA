#include<iostream>
using namespace std;

void f(int i,int n){
    if(i < 0){
        return;
    }
    cout<<i<<endl;
    f(i-1,n);
}

int main(){
    f(5,5);

    return 0;
}