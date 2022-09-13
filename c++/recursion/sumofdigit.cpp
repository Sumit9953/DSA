#include<iostream>
using namespace std;

int sumof(int n){
    if(n < 10){
        return n;
    }

    return sumof(n/10)+n%10;
}

int main(){
cout<<sumof(1234)<<endl;
}