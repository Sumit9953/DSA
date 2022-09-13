#include<iostream>
using namespace std;

void reverse(int n){
    if(n<=0){
    return ;
    }else{
        reverse(n-1);
        cout<<n<<" ";

    }
}
// void reverse(int n){
//     if(n==0){
//     return ;
//     }else{
//         cout<<n<<" ";
//         reverse(n-1);

//     }
// }

int main(){
    reverse(5);

}