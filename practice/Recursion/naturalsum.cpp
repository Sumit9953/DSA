#include<iostream>
using namespace std;

int sumOfNatural(int n){
    if(n == 0){
        return 0;
    }
    return n+sumOfNatural(n-1);
}

int main(){
    cout<<sumOfNatural(6);
}