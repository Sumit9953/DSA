#include<iostream>
using namespace std;


int factorial(int n){
    // cout<<n<<endl;
    if(n <=1){
        return 1;
    }
    int small = factorial(n-1);
    return n*small;
}
int zero(int n){
    int num = factorial(n);
    int count = 0;
    while(num != 0){
            if(num%10 == 0){
                count++;
            }
            num = num/10;
            
    }
    return count;
}

int main(){
  cout<<factorial(7);
}