#include<iostream>
using namespace std;

int Length(char s[]){
    if(s[0] == '\0'){
        return 0;
    }
    return Length(s+1)+1;
}

int main(){
    char s[] = "afshgfgch";
    cout<<Length(s)<<" ";
}