#include<iostream>
#include<string>
using namespace std;

string compression(string str){
    string temp;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while ( i < n-1 && str[i+1] == str[i])
        {
            i++;
            count++;
        }
        temp += str[i];
        temp += to_string(count);
        
    }
    if(temp.length() > str.length()){
        return str;
    }else{
        return temp;
    }
}

int main(){
    string s1 = "aaaabbbcddddeee";
    string s2 = "abcd";
    cout<<compression(s1)<<" "<<endl;
    cout<<compression(s2)<<" "<<endl;
}