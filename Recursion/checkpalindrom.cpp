#include<iostream>

using namespace std;

bool check(char str[],int start,int end){
if(start >= end){
    return true;
}

if(str[start] != str[end]){
    return false;
}
return check(str,start+1,end-1);
}

int main(){
    char str[] = {"aba"};
    cout<<check(str,0,2)<<endl;
    
}