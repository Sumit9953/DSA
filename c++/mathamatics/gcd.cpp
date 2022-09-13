#include<iostream>
using namespace std;

int gcd(int a,int b){
   int res = min(a,b);
   while (res>0)
   {
    if(a%res == 0 && b%res == 0){
        break;
    }
    res--;
   }
   
    return res;
}
int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);

}