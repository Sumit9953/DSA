#include<iostream>
using namespace std;

int fact(int x){

    if(x <= 1){
        return 1;
    }else{
        return fact(x-1)*x;
    }
}



int main(){
    int x;
    cin>>x;
    cout<<fact(x);
}