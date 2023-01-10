#include<iostream>
using namespace std;

void f(int n){
    if(n == 0){
        return;
    }

    cout<<" Sumit ";
    f(n-1);
}

int main(){
    f(5);

    return 0;
}