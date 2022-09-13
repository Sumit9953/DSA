#include<iostream>
using namespace std;

int count(int n){
    if(n<10){
            if(n==0)
            return 1;
        else
            return 0;
        }
    int small = count(n/10);
    if(n%10 == 0){
       return small+1;
    }else{
        return small;
    }
    
}



int main(){
    int n;
    cin>>n;
    cout<<count(n);
}