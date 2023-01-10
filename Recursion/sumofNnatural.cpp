#include<iostream>
using namespace std;

void f(int i , int n){
    if(i < 1){
        cout<<n<<" ";
        return;
    }

   f(i-1,n+i);
}

int main(){
    f(5,0);
    return 0;
}