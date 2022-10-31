#include<iostream>
#include<algorithm>
using namespace std;

int cut(int n,int a,int b,int c){
    if(n == 0)return 0;
    if(n < 0) return -1;
    int res = max(max(cut(n-a,a,b,c),cut(n-b,a,b,c)),cut(n-c,a,b,c));
    if(res == -1){
        return -1;
    }
    return res+1;
}

int main(){
    cout<<cut(9,2,2,2)<<" ";
}