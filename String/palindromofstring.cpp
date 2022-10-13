#include<iostream>
#include<strings.h>
using namespace std;

bool palindrom(string s){
    int i = 0;
    int j = s.length()-1;
    bool res = false;
    while (i <= j)
    {
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
        
    }
    return true;
}

// bool ispal(string s){
//     string res = s;
//     reverse(res.begin(),res.end());

// }
int main(){
    string s = "abbcbba";
    cout<<palindrom(s)<<endl;

}