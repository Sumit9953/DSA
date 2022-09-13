#include<iostream>
using namespace std;

int print(int n){
    if(n == 0){
        return 0;
    }
    else{
        cout<<n<<" ";
        print(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}