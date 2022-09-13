#include<iostream>
using namespace std;

bool palidrom(string &str,int start,int end){
    if(start>=end){
        return true;
    }else{
        return (str[start] == str[end])&&palidrom(str,start+1,end-1);
    }

}

int main(){
    string str = "abcbba";
    int start = 0;
    int n = str.length();
    int end = n-1;
    cout<<palidrom(str,start,end);
}