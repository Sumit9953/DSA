#include<iostream>
using namespace std;

int print(int n){
    if(n == 0){
        return 0;
    }else{
        print(n-1);
        cout<<n<<" ";
    }


}

int main(){
    int n;
    cin>>n;
    print(n);
}