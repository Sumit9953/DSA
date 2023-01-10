#include<iostream>
using namespace std;

bool f(int i ,int j,string &s1){
    if(i >= j){
        return true;
    }

    if(s1[i] != s1[j]) return false;
    else return f(i+1,j-1,s1);
}


int main(){
    string s1 = "aabba";

    cout<<f(0,4,s1);
}
