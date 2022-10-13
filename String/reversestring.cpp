#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void reverse(string &s,int start,int end){
    while (start <= end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    
}

void reverseWord(string &s){
    int start = 0;
    for (int end = 0; end < s.length(); end++)
    {
        if(s[end] == ' '){
            reverse(s,start,end-1);
            start = end+1;
        }
    }
    // reverse(s,start,s.length()-1);
    // reverse(s,0,s.length()-1);

}


int main(){
    string s = "welcome for geek";
    reverseWord(s);
    cout<<s;
}