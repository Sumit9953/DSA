#include<iostream>
using namespace std;

int countdigit(long n){
    int count = 0;
    while (n != 0)
    {
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countdigit(n);
}